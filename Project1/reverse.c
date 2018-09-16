#include <stdio.h>
#include "file_utils.c"
#include <sys/stat.h>

int main(int argc, char *argv[]){

char* input = argv[1]
char* output = argv[2]

struct stat st;
stat(*argv[1], &st);
int inputSize = st.st_size

read_file(input, inputSize)

return 0
}
