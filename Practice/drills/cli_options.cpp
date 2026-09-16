#include <iostream>
#include <getopt.h>

void cli_application(int argc, char *argv[]){
  char short_options[] = "hv";
  int opt;

  while((opt=getopt(argc, argv, short_options)) != -1){
    switch(opt){
      case 'h':
      std::cout << "Usage: myprogram [options]\n\n" << "Options:\n"
      << "  -h  print this help\n"
      << "  -v print the version number\n";
      break;

      case 'v':
      std::cout << "myprogram v1.0.0\n";
      break;

      default:
      std::cout << "Unknown option, Use -h for program usage";
      break;
    }
  }
  if (argc == 1){
      std::cout << "Use -h for program usage";
  }
}
int main(int argc, char *argv[]) {
  cli_application(argc, argv);
  return 0;
}
