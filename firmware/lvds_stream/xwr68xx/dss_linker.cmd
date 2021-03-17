/*----------------------------------------------------------------------------*/
/* Linker Settings                                                            */
--retain="*(.intvecs)"

-stack 0x1000

/*----------------------------------------------------------------------------*/
/* Section Configuration                                                      */
SECTIONS
{
    /* System Heap for the application is placed into the TCMB Memory */
    systemHeap      : {}  > L2SRAM_UMAP0 | L2SRAM_UMAP1

    /* SW Buffer1 is placed at the start of the L3 SRAM. This is to showcase
     * that software buffers placed into different memory locations can be
     * streamed out */
    .swBuffer1      : { } > L3SRAM

    /* The SW Buffer2 is to be placed into HSRAM memory. This will ensure
     * that the buffer can be streamed out. */
    .swBuffer2      : { } > HSRAM

    /* The LVDS Stream profile requires the data cube data to be placed. The
     * application used this data and placed it in L3 memory */
    .dataCubeMemory : { } > L3SRAM

    /* CBUFF Headers are placed into the L3 memory. This will ensure that
     * the headers can be attached to the data and get streamed out. */
    .cbuffHeader    : { } > L3SRAM
}
/*----------------------------------------------------------------------------*/


