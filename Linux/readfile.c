#include <stdio.h>
#include <stdlib.h>

void readFile(char * filename){

  FILE *fp;
  char * line;
  size_t len = 0;
  ssize_t read;
  fp = fopen(filename, "r");

  if (fp == NULL){
    exit(1);
  }
  while (read = getline(&line, &len, fp) != -1) {
    //printf("%zu: \t", read);
    printf("%s", line);
  }
  if (line){
    free(line);

  line = NULL;
  fclose(fp);
  exit(EXIT_SUCCESS);
  }
}

int main(int argc, char **argv){
  if(argc != 2){
    printf("[-] Error: Please provide a filename\n");
    exit(1);
  }
  char * filename = argv[1];

  readFile(filename);
  return 0;
}
