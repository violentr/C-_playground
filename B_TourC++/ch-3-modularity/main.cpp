#include <iostream>
#include "mymath.h"

// clang++ -std=c++20 -Wall main.cpp my_math.cpp -o app && ./app

int main(){
  std::cout << "Result of triple: " << triple(3) << std::endl;
  std::cout << "Max number: " << maxOf(3, 6) << std::endl;
}
