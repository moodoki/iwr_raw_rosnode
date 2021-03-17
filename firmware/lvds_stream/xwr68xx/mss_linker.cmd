/*----------------------------------------------------------------------------*/
/* Linker Settings                                                            */
--retain="*(.intvecs)"

/*----------------------------------------------------------------------------*/
/* Section Configuration                                                      */
SECTIONS
{
    /* System Heap for the application is placed into the TCMB Memory */
    systemHeap  : { }  > DATA_RAM
}
/*----------------------------------------------------------------------------*/

