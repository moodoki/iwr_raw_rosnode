Example of hard-coded sensor config for 68xx using mmWave SDK 3.1.1.2 

Steps to update mmWave SDK 3.0 68xx project to use example hard-coded config:
1. Rename/backup existing cli.c source file in mmwave_sdk_03_01_01_02\packages\ti\utils\cli\src directory
2. Copy the new cli.c file in mmwave_sdk_03_01_01_02\packages\ti\utils\cli\src
3. Re-build cli library using gmake as described in mmWave SDK user guide
  a. Make sure to update setenv.bat with correct device (i.e. iwr68xx) before executing it
  b. run 'gmake clean' and then 'gmake lib' in the mmwave_sdk_03_01_01_02\packages\ti\utils\cli directory.
4. Re-build the 68xx lvds_stream demo 

NOTE: If replacing/updating the example sensor config given in the cli.c file, make sure to use a config that was generated for the desired device and mmWave SDK version.
