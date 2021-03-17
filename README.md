TI mmWave Radar
===============

Code for interfacing with TI xWR radars and DCA100EVM


Organization
------------

  ros node preferred.
- `mmWave/scripts` ROS Node
- `hardware` Hardware related stuff, mounts, BOM, etc
- `notebooks` Jupyter notebooks to show demo processing raw data
- `radar_configs` config files for radar

To change in next version
----

- xWR18xx requires twice the data rate as 2 lanes in DCA are not used and all zeros are sent
- ROS node config can be improved 
- xWR14xx and xWR18xx should be made to take the same config file

More testing required with the 18xx radar.


Important notes
---------------

Current config files are serial commands as sent to radar. This could be improved, perhaps using
a json format, and using the ROS node driver to convert to serial commands.


Dev notes
---------

Exported from internal [290a8f54]. No code changes, removed files that we don't have permission to
distribute.
