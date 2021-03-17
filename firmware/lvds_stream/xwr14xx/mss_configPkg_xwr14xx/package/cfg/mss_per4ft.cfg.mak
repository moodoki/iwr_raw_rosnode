# invoke SourceDir generated makefile for mss.per4ft
mss.per4ft: .libraries,mss.per4ft
.libraries,mss.per4ft: package/cfg/mss_per4ft.xdl
	$(MAKE) -f package/cfg/mss_per4ft.src/makefile.libs

clean::
	$(MAKE) -f package/cfg/mss_per4ft.src/makefile.libs clean

