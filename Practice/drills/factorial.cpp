#include <iostream>

/* Recursion */
int factorial(int num){
  if (num == 0 || num == 1) return 1;
  if (num > 0) return num * factorial(num - 1);
  return 0;
}

int main(){
  int n = 5;
  std::cout << "Factorial "<< n  << ": " << factorial(n) << '\n';
}
