#include <iostream>
#include <fstream>
#include <filesystem>
namespace fs = std::filesystem;

void rename_file(){
    const char* oldFileName = "old.txt";
    const char* newFileName = "new.txt";

    if (!(std::rename(oldFileName, newFileName))) {
        std::cout << "File renamed successfully." << std::endl;
    } else {
        std::cerr << "Error renaming file!" << std::endl;
    }
}
void copy_image(){
  std::ifstream src("image.png", std::ios::binary);
  std::ofstream dst("image2.png", std::ios::binary);
  dst << src.rdbuf();
}

void remove_file(const std::string &filename){
    const fs::path file(filename);
    if (fs::exists(file)){
      fs::remove(file);
      std::cout << "File " << file << " was removed !" << '\n';
    }else{
      std::cout << "No such file: " << file << '\n';
    }
}
int main() {
    copy_image();
    std::string file = "image2.png";
    remove_file(file);
    return 0;
}
