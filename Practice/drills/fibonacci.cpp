#include <iostream>

void fibonacci(int num){
  int first = 0;
  int second = 1;
  int next = 0;

  if (num == 0) std::cout << 0;
  if (num == 1) std::cout << 1;
  std::cout << "Fibonacci " << num << '\n';
  for (int i=0;i<num;i++){
    std::cout << first << " ";

    next = first + second;
    first = second;
    second = next;
  }
}

int main(){
  fibonacci(10);
}
