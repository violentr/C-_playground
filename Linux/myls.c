#include <dirent.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

/*
 * gcc myls.c -o myls
 * Usage: ./myls /your/path/here
 *
 */

void listdir(const char * pathName){
  DIR *dp;
  char PATH[258]={0};

  struct dirent *dirp;

  if ((dp = opendir(pathName)) == NULL){
    printf("Cannot open directory error=%s\n", strerror(errno));
    exit(1);
  }
  while ((dirp = readdir(dp)) != NULL){
    if (dirp->d_type == DT_DIR){
      if(strcmp(dirp->d_name, ".") == 0 || strcmp(dirp->d_name, "..") == 0){
        continue;
      }
      //printf("%s/%s\n", pathName, dirp->d_name);
      snprintf(PATH, sizeof(PATH), "%s/%s", pathName, dirp->d_name);
      //printf("PATH %s", PATH);
      listdir(PATH);
    }else{
      printf("%s/%s\n",pathName, dirp->d_name);
    }
  }
  closedir(dp);
}

int main(int argc, char * argv[]){


  if(argc != 2) {
    printf("%s\n", "Please provide the directory" );
  }
  listdir(argv[1]);
  exit(0);
}
