#include <iostream>
#include <string>

/*
 * 1 2 3
 * 4 5 6
 * 7 8 9
 * 0 # *
 */

int main(){
  std::string chars = "1234567890#*";
  int rows = chars.length()/3;

  for(int i=0;i<rows;i++){
    for(int j=0;j<3;j++){
      std::cout << chars[i*3+j] << " ";
    }
    std::cout << "\n";
  }
}
