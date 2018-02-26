/*
 * This header is used for adding .lib file to linkers for LIM in this 
 * Computer.
 */

#pragma once

#include <lim/LIMSolverInterface.h>

#ifdef _DEBUG
	#pragma comment(lib, "limd")
#else 
	#pragma comment(lib, "lim")
#endif
