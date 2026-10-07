#include <iostream>

/* Find the greatest common divisor (GCD) using Euclid's algorithm */

int gcd(int n1, int n2){

  while(n2 != 0){
    int remainder = n1 % n2;
    n1 = n2;
    n2 = remainder;
  }
  return n1;
}

int least_common_multiple(int a, int b){
  int x = a;
  int y = b;
  int gcd_value = 0;
  gcd_value = gcd(x, y);

  return (a / gcd_value) * b;
}


int main(){
  int a = 3;
  int b = 6;
  std::cout << "Least common multiple for " << a << " and " << b << " = " << least_common_multiple(a, b);
}
