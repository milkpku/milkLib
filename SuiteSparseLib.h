/*
 * This header is used for adding .lib file to linkers for SuiteSparse in this 
 * Computer.
 *
 */
#pragma once

#ifdef _DEBUG
  #pragma comment(lib, "metisd")
  #pragma comment(lib, "suitesparseconfigd")
  #pragma comment(lib, "libamdd")
  #pragma comment(lib, "libbtfd")
  #pragma comment(lib, "libcamdd")
  #pragma comment(lib, "libccolamdd")
  #pragma comment(lib, "libcolamdd")
  #pragma comment(lib, "libcholmodd")
  #pragma comment(lib, "libcxsparsed")
  #pragma comment(lib, "libklud")
  #pragma comment(lib, "libldld")
  #pragma comment(lib, "libumfpackd")
  #pragma comment(lib, "libspqrd")
#else
  #pragma comment(lib, "metis")
  #pragma comment(lib, "suitesparseconfig")
  #pragma comment(lib, "libamd")
  #pragma comment(lib, "libbtf")
  #pragma comment(lib, "libcamd")
  #pragma comment(lib, "libccolamd")
  #pragma comment(lib, "libcolamd")
  #pragma comment(lib, "libcholmod")
  #pragma comment(lib, "libcxsparse")
  #pragma comment(lib, "libklu")
  #pragma comment(lib, "libldl")
  #pragma comment(lib, "libumfpack")
  #pragma comment(lib, "libspqr")
#endif
