#include <iostream>

bool is_even(int n){
  return (n & 1) == 0;
}

int main(){
 for (int i=0;i<10;i++){
   std::cout << "Even ? " << i << " = " << std::boolalpha << is_even(i) << '\n';
 }
}
