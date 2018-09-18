#include "file_utils.h"
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>
/**
 *Reads filename and stores it into buffer
 *
 *Help from http://www.cplusplus.com/reference/cstdio/fread/
 */
int read_file( char* filename, char** buffer ){

  FILE* input;
  input = fopen(filename, "r");

  if(input == NULL){
    fprintf( stderr, "Reading Error");
    return errno;
  }
  fread(*buffer, sizeof(char), sizeof(buffer)+1, input);
  fclose(input);
  return 0;

}

/**
 *
 * Writes buffer into filename
 *Help from http://www.cplusplus.com/reference/cstdio/fwrite/
 */ 
int write_file( char* filename, char* buffer, int size){
  FILE* output;
  output = fopen(filename, "w");

  if(output){
    fwrite(buffer, sizeof(char), size, output);
    fclose(output);
    return 0;
  }
  else{
    fprintf( stderr, "Writing Error");
    return errno;
  }
  return 0;
}
