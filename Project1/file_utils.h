#ifdef FILE_UTILS_H
#define FILE_UTILS_H

#include <stdio.h>

/**
 *
 *Reads from filename
 */
int read_file( char* filename, char **buffer );

/**
 *
 *Writes to filename
 */
int write_file( char* filename, char *buffer, int size);

#endif
