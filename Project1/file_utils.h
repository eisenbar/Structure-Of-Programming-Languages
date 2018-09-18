#ifdef FILE_UTILS_H
#define FILE_UTILS_H

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

/**
 *
 *Reads from filename
 */
int read_file( char* filename, char** buffer );

/**
 *
 *Writes to filename
 */
int write_file( char* filename, char *buffer, int size);

#endif
