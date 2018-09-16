#include <stdio.h>
#include "file_utils.c
#include <stdlib.h>
#include <errno.h>

int read_file( char* filename, char **buffer ){

	FILE *input;
	input = fopen(filename, "r");
	sizeOfFile = sizeof(buffer);

	if(input){
		fread(&buffer, sizeof(char), sizeOfFile+1, input);

		fclose(input)
	}
	else(){

		return errno
	}
}
int write_file( char* filename, char *buffer, int size){

}
