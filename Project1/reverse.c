#include <stdio.h>
#include "file_utils.c"
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

  if( argc != 3){
    fprintf( stderr, "Incorrect inputs");
    return errno;
  }

  char* input = argv[1];
  char* output = argv[2];

  struct stat st;
  stat(input, &st);
  int inputSize = st.st_size;

  char* buffer = (char*)malloc(sizeof(char)*inputSize);
  char* reverse = (char*)malloc(sizeof(char)*inputSize);

  //testing buffer is allocated correctly
  if (buffer == 0){
    fprintf(stderr, "Incorrect size allocation");
    return errno;
  }

  //testing return value of read_file
  int testRead = read_file(input, &buffer);
  if (testRead != 0){
    fprintf(stderr, "Incorrect file read");
    return errno;
  }

  //reverses buffer into reverse
  printf("%s\n", buffer);
  for(int i = inputSize, k = 0; i >=0; i--){
    if(buffer[i] != '\0') {
      reverse[k] = buffer[i];
      k++;
    }
  }
  printf("%s\n", reverse);
  //testing write to file
  int testWrite = write_file(output, reverse, inputSize);
  if (testWrite != 0){
    fprintf(stderr, "Incorrect file read");
    return errno;
  }

  //releases memory previoulsy allocated
  free(buffer);
  free(reverse);
  return 0;
}
