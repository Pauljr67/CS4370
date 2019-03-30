// -------------------------------------------------------------------------
// readGML.h 
//
// written by Sharlee Climer, March 2019
//
// ------------------------------------------------------------------------

#ifndef _READGML_H
#define _READGML_H

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include "timer.h"

const int QUIET = 1;  // set to one to eliminate output to screen
const int VERBOSE = 0;  // set to one to display maximum output to screen

const int MAX_NUM_NODES = 1000000; // maximum number of nodes 
const int STRNG_LENGTH = 200; // maximum number of chars in a string

inline void warning(const char* p) { fprintf(stderr,"Warning: %s \n",p); }
inline void fatal(const char* string) {fprintf(stderr,"Fatal: %s\n",string);
                                 exit(1); }

#endif
