/*
 * This header is used for adding .lib file to linkers for NanoGUI in this 
 * Computer.
 *
 */

#pragma once

#define IGL_VIEWER_WITH_NANOGUI
#define _USE_MATH_DEFINES
#include <math.h>

#ifndef _DEBUG
#pragma comment(lib, "nanogui")
#else
#pragma comment(lib, "nanoguid")
#endif
