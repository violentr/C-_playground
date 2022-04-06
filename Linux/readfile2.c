#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int readFile(char * filename){

  int fd;
  char buffer[10]={0};
  int ret  = 0;

  fd = open(filename, O_RDONLY);
  if ( fd == -1){
    printf("[-]Error: Filename %s doesn\'t exist? \n", filename);
    exit(EXIT_FAILURE);
  }
  while (ret = read(fd, buffer, sizeof(buffer) > 0)) {
    printf("%s", buffer);
    memset(buffer, 0, sizeof(buffer));
  }

  close(fd);
  return EXIT_SUCCESS;
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
