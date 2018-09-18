#include <stdio.h>
#include "file_utils.c"
#include <sys/stat.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	if( arc != 3){
		fprintf( stderr, "Incorrect inputs");
		return errno;
	}

	char* input = argv[1];
	char* output = argv[2];

	struct stat st;
	stat(*argv[1], &st);
	int inputSize = st.st_size;

	char* buffer = (char*)malloc(sizeof(char)*inputSize);
	char* reverse = (char*)malloc(sizeof(char)*inputSize);

	read_file(input, &buffer);

	for(int i = 0; i >=0; i--){
		reverse[i] = buffer[inputSize - i - 1];
	}

	write_file(output, reverse, inputSize);


	free(buffer);
	free(reverse);
	return 0;
}
