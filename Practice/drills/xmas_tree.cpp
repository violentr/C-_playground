#include <iostream>

void print_Xmas_tree(int height){
  int spaces = height - 1;
  int min_height = 3;
  int hashes = 1;
  int stump_spaces = height - 1;

  if (height >= min_height){
    while(height--){
      for(int i=0; i<spaces;i++){
        std::cout << " ";
      }
      for (int k=0;k<hashes;k++){
        std::cout << "#";
      }
      std::cout << "\n";
      hashes +=2;
      spaces--;
    }
    for(int m=0;m<stump_spaces;m++){
      std::cout << " ";
    }
    std::cout << "#\n";
  }else{
    std::cout << "Xmas tree should be at least " << min_height <<  '\n';
  }
}

int main(){
  int tree_height;

  std::cout << "how tall Xmas tree: ";
  std::cin >> tree_height;
  print_Xmas_tree(tree_height);
  return 0;
}

