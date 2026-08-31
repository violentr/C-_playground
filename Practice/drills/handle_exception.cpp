#include <iostream>
#include <string>
#include <cctype>
class division_byzero{};

int divide(int n, int n2){
  if (n2 == 0){
    throw division_byzero();
  }
  return n / n2;
}

int main(){
  try {
    int numbers[] = {1,5,10,0};
    int num = 10;
    for(int i : numbers){
      std::cout << "Divide " << num << " by " << i << " =  " << divide(num, i) << '\n';
    }
  }catch (division_byzero){
    std::cerr << "Error: Division by zero"  << '\n';
  }
}

