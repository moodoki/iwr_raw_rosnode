#include <stdio.h>
#include <string.h>
#include <stdint.h>

/*
	To compile for debugging:
		gcc circ_buff.c -o circ_buff && ./circ_buff && rm circ_buff
		This would: - Compile the c file 		(gcc circ_buff.c -o circ_buff)
					- Run the compiled file 	(./circ_buff)
					- Delete the compiled file 	(rm circ_buff)
	To compile for running:
		cc -fPIC -shared -o circ_buff.so circ_buff.c
*/

/*
	This function changes the value of a binary array passed in by reference.
	If the put idx passes the next frame boundary, the pop_array puts a 1 in the correct
	location and updates the get idx to be frame boundary.
*/

int16_t find_pops(int64_t  old_put_idx,
			   int64_t  new_put_idx,
			   int64_t  frame_size)
{
	int32_t old_frame_idx = old_put_idx / frame_size;
	int32_t new_frame_idx = new_put_idx / frame_size;
	return(old_frame_idx == new_frame_idx) ? -1 : old_frame_idx;
}

void add_zeros(int64_t num_zeros,
			   int16_t* buffer,
			   int64_t buffer_len,
			   int64_t* put_idx,
			   int64_t frame_size,
			   int16_t* pop_frame_idx)
{
	int32_t new_put_idx = *put_idx;
	int32_t to_end_of_frame = frame_size - (*put_idx % frame_size); // number of cell to the end of current frame
	if (num_zeros < to_end_of_frame) { // if does not reach the end of the frame
		memset(buffer + *put_idx, 0, num_zeros * sizeof(buffer[0])); // set zeros accordingly
		new_put_idx += num_zeros; // move pointer
	}
	else {	// if overflow
		memset(buffer + *put_idx, 0, to_end_of_frame * sizeof(buffer[0])); // set all unfinished cell of frame to 0
		num_zeros -= to_end_of_frame; // substract those 0 filled
		new_put_idx += to_end_of_frame; // move to start of the next frame
		if (new_put_idx >= buffer_len) new_put_idx -= buffer_len; // loop if necessary

		num_zeros %= frame_size; // the rest of the needed zeros (skip 0-filled frames)
		memset(buffer + new_put_idx, 0, num_zeros * sizeof(buffer[0])); // fill zeros to destination idx
		new_put_idx += num_zeros; // move pointer
	}
	*pop_frame_idx = find_pops(*put_idx, new_put_idx, frame_size);
	*put_idx = new_put_idx;
}

void add_msg(int16_t* msg,
			 int16_t msg_len,
			 int16_t* buffer,
			 int64_t buffer_len,
			 int64_t* put_idx,
			 int64_t frame_size,
			 int16_t* pop_frame_idx)
{
	int32_t new_put_idx = *put_idx;
	if (*put_idx + msg_len <= buffer_len) //did not loop around to beginning
	{
		memcpy(buffer + *put_idx, msg, msg_len*sizeof(msg[0]));
		new_put_idx = *put_idx + msg_len; //new location of put idx
		if (new_put_idx >= buffer_len) new_put_idx -= buffer_len;
	}
	else // did loop around to beginning
	{
		memcpy(buffer + *put_idx, msg, (buffer_len - *put_idx)*sizeof(msg[0]));
		memcpy(buffer, msg + (buffer_len - *put_idx), (msg_len - buffer_len + *put_idx)*sizeof(msg[0]));
		new_put_idx = msg_len - buffer_len + *put_idx;
	}

	*pop_frame_idx = find_pops(*put_idx, new_put_idx, frame_size);
	*put_idx = new_put_idx;
}

void pad_and_add_msg(int64_t seq_c,
        int64_t seq_n,
        int16_t* msg,
        int16_t msg_len,
        int16_t* buffer,
        int64_t buffer_len,
        int64_t* put_idx,
        int64_t frame_size,
        int16_t* pop_frame_idx){
    //determine if zeros needed
    int64_t num_zeros = (seq_n - seq_c - 1) * 728;
    //printf(stderr, "INFO: current sequence number %ld, received %ld\n", seq_c, seq_n);
    if(num_zeros > 0){
        fprintf(stderr, "WARN: Padding %ld zeros\n", num_zeros);
        add_zeros(num_zeros, buffer, buffer_len, put_idx, frame_size, pop_frame_idx);
    }

    add_msg(msg, msg_len, buffer, buffer_len, put_idx, frame_size, pop_frame_idx);
}
