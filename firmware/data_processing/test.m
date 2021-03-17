fid = fopen('adc_data_68xx.bin','r');
adcData = fread(fid, 'uint16');

fclose(fid);
fileSize = size(adcData, 1); 
numADCSamples = 256; % number of ADC samples per chirp
numADCBits = 16; % number of ADC bits per sample
numRX = 1; % number of receivers
numLanes = 2; % do not change. number of lanes is always 2
%isReal = 0; % set to 1 if real only data, 0 if complex data0

numChirps = 10; %for display only, select the number of frames to analyze

%if (~isReal) %complex
%    datalength = numADCSamples * 2 * numRX * numChirps;
%else
%    datalength = numADCSamples * 2 * numRX * numChirps;
% end
%complex samples:
datalength = numADCSamples * 2 * numRX * numChirps;
LVDS = zeros(1, datalength/2);

counter = 1;
for i=1:4:datalength-1
        LVDS(1,counter)     = adcData(i) + sqrt(-1)*adcData(i+2);
        LVDS(1,counter+1)   = adcData(i+1)+sqrt(-1)*adcData(i+3);
        counter = counter + 2;
end

%figure
plot(abs(fft(LVDS(1:numADCSamples))));
title('1D FFT');
%if want to plot the nth chirp, do the following:
% n=5 %change the value as desired
%plot(abs(fft(LVDS(numADCSamples*(n-1)+1:numADCSamples*n))));