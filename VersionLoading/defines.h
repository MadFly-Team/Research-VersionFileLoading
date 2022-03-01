/*--

    @file 		defines.h
    @defgroup 	VersionLoading version controlled include setup

    @brief      This highlights the method to be used for generating
                the filename with the correct version for the correct
                source to be compiled.

    @copyright	Neil Beresford 2022

*/

//-----------------------------------------------------------------------------

#pragma once

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// Defines
//-----------------------------------------------------------------------------


#define stringify(x) #x

#define MODULEFILEPRE(a, b) stringify(module ## a ## _ ## b ## .h )
#define MODULEFILE(a, b) MODULEFILEPRE(a, b)


//-----------------------------------------------------------------------------
// End of defines.h
//-----------------------------------------------------------------------------




