#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

void readFile(char * filename){
  int fd = -1;
  char buffer[4096] ={0};
  int ret = 0;

  fd = open("./test1.txt", O_RDONLY);

  if (fd == -1){
    printf("Error in opening file error_num=%d, %s \n", errno, strerror(errno));
    exit(EXIT_FAILURE);
  }
  while (ret = read(fd, buffer, sizeof(buffer) - 1) > 0) {
    printf("%s", buffer);
    memset(buffer, 0, sizeof(buffer));
  }
  close(fd);
  exit(EXIT_SUCCESS);
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
