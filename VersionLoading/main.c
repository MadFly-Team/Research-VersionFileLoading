/*--

    @file 		main.c
    @defgroup 	VersionLoading version controlled include setup

    @brief      This highlights the method to be used for generating
                the filename with the correct version for the correct
                source to be compiled.

    @copyright	Neil Beresford 2022

*/

//-----------------------------------------------------------------------------
// Includes
//-----------------------------------------------------------------------------

// Support system related header files...
#include "stdlib.h"
#include "stdio.h"
#include "string.h"

// Version details and defines for generating the file name...
#include "version.h"        // Version numbers
#include "defines.h"        // stringify defines for creating the file names

// Version related include files...
#include MODULEFILE(VERSIONMAJOR, VERSIONMINOR)


//-----------------------------------------------------------------------------
// External Functionality
//-----------------------------------------------------------------------------



/**---------------------------------------------------------------------------
    @ingroup 	VersionLoading version controlled include setup
    @brief		main entry for testing the correct header file for the
                defined version set in version.h
    @param      nArgs - number of arguments pass on command line
    @param      pArgs - array of strings with the arguments spit
    @return		ZERO for no errors
  --------------------------------------------------------------------------*/
int main(int nArgs, char** pArgs)
{
    // VERSIONMESSAGE is included in the version chosen header file 
    printf(VERSIONMESSAGE);
	printf("\n");

	// return, no errors
    return(0);
}


//-----------------------------------------------------------------------------
// End of file: main.c
//-----------------------------------------------------------------------------

