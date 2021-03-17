/*----------------------------------------------------------------------------*/
/* Linker Settings                                                            */
--retain="*(.intvecs)"

/*----------------------------------------------------------------------------*/
/* Section Configuration                                                      */
SECTIONS
{
    /* System Heap for the application is placed into the TCMB Memory */
    systemHeap      : { }  > DATA_RAM

    /* The streaming profile requires the data cube data to be placed. The
     * application used this data and placed it in L3 memory */
    .dataCubeMemory : { } > L3_RAM

    /* The SW Buffer1 is to be placed into L3 memory. This will ensure
     * that the buffer can be streamed out. */
    .swBuffer1      : { } > L3_RAM

    /* The SW Buffer2 is to be placed into TCMB memory. This will ensure
     * that the buffer can be streamed out. */
    .swBuffer2      : { } > DATA_RAM

    /* CBUFF Headers are placed into the L3 memory. This will ensure that
     * the headers can be attached to the data and get streamed out. */
    .cbuffHeader    : { } > L3_RAM
}
/*----------------------------------------------------------------------------*/

