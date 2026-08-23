#include <iostream>
#include <string>
#include <fstream>

int read_file(std::string& file_name){
  std::ifstream file(file_name);

  if (!file){
    std::cout << "Issue: Can't find " << file_name << " file" << std::endl;
    return 1;
  }

  std::string word;
  while(file >> word){
    std::cout << word << " ";
  }
  return 0;
}

int write_file(std::string& file_name, std::string& contents){
  std::ofstream file(file_name);

  if (!file){
    std::cout << "Issue: Can't find " << file_name << " file" << std::endl;
    return 1;
  }

  file << contents;
  std::cout << "Contents was writtent to file: " << file_name << std::endl;
  return 0;
}

int main(){
  std::string file_name = "file.txt";
  std::string content = "This is file contents, and many many more..";

  std::cout << "Write to a file: " << file_name << std::endl;
  write_file(file_name, content);
  std::cout << "\n";

  std::cout << "Read from file: " << file_name << std::endl;
  read_file(file_name);
  std::cout << "\n";
}

