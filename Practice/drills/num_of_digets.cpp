#include <iostream>

int num_of_digits(int n){
  int count = 0;
  while(n > 0){
    ++count;
    n /= 10;
  }
  return count;
}

int main(){
 int n = 12345;
 std::cout << "Number: "<< n << " has " << num_of_digits(n) << " digits";
}
