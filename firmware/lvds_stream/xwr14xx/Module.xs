/******************************************************************************
 * FILE PURPOSE: TEST Module specification file.
 ******************************************************************************
 * FILE NAME: module.xs
 *
 * DESCRIPTION:
 *  This file contains the module specification for the package documentation.
 *
 * Copyright (C) 2016, Texas Instruments, Inc.
 *****************************************************************************/

/* Load the library utility. */
var libUtility = xdc.loadCapsule (java.lang.System.getenv("MMWAVE_SDK_INSTALL_PATH") + "/scripts/buildlib.xs");

/**************************************************************************
 * FUNCTION NAME : modBuild
 **************************************************************************
 * DESCRIPTION   :
 *  The function is used to add all the Unit Test files to the release
 *  package
 **************************************************************************/
function modBuild()
{
    /* Add all the .c files to the release package. */
    var srcFiles = libUtility.listAllFiles (".c", "xwr14xx", false);
    for (var k = 0 ; k < srcFiles.length; k++)
        Pkg.otherFiles[Pkg.otherFiles.length++] = srcFiles[k];

    /* Add all the .h files to the release package. */
    var incFiles = libUtility.listAllFiles (".h", "xwr14xx", false);
    for (var k = 0 ; k < incFiles.length; k++)
        Pkg.otherFiles[Pkg.otherFiles.length++] = incFiles[k];

    /* Add all the .cfg files to the release package. */
    var cfgFiles = libUtility.listAllFiles (".cfg", "xwr14xx", false);
    for (var k = 0 ; k < cfgFiles.length; k++)
        Pkg.otherFiles[Pkg.otherFiles.length++] = cfgFiles[k];

    /* Add all the .mak files to the release package. */
    var makFiles = libUtility.listAllFiles (".mak", "xwr14xx", false);
    for (var k = 0 ; k < makFiles.length; k++)
        Pkg.otherFiles[Pkg.otherFiles.length++] = makFiles[k];

    /* Add all the .cmd files to the release package. */
    var cmdFiles = libUtility.listAllFiles (".cmd", "xwr14xx", false);
    for (var k = 0 ; k < cmdFiles.length; k++)
        Pkg.otherFiles[Pkg.otherFiles.length++] = cmdFiles[k];

    /* Add all the .map files to the release package. */
    var mapFiles = libUtility.listAllFiles (".map", "xwr14xx", false);
    for (var k = 0 ; k < mapFiles.length; k++)
        Pkg.otherFiles[Pkg.otherFiles.length++] = mapFiles[k];

    /* Add all the executables files to the release package. */
    var outFiles = libUtility.listAllFiles (".xer4f", "xwr14xx", false);
    for (var k = 0 ; k < outFiles.length; k++)
        Pkg.otherFiles[Pkg.otherFiles.length++] = outFiles[k];

    /* Add all the text files to the release package: This is for the CLI scripts */
    var txtFiles = libUtility.listAllFiles (".txt", "xwr14xx", false);
    for (var k = 0 ; k < txtFiles.length; k++)
        Pkg.otherFiles[Pkg.otherFiles.length++] = txtFiles[k];

    /* Add all the test profiles to test package */
    var cfgFiles = libUtility.listAllFiles (".cfg", "xwr14xx/profiles", false);
    for (var k = 0 ; k < cfgFiles.length; k++)
        Pkg.otherFiles[Pkg.otherFiles.length++] = cfgFiles[k];
}

