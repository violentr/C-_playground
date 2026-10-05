#include <iostream>
int fib(int num){

  if (num < 2) { return num; }
  return fib(num - 1) + fib(num - 2);
}
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
  int num = 10;
  fibonacci(num);
  std::cout << "\nFib(" << num <<") - " << fib(num) << '\n';
}
