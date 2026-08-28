#include <iostream>

const int&  min(const int &num, const int &num2){
  if (num > num2) return num;
  return num2;
}

int main(){
  /* the result of the code will lead to
   * dangling references
   */
   // reads dead memory (UB) — expected "work" by luck.
  const int &result = min(1+2, 3+4);
  std::cout << result;

  /* to avoid dangling references, need to
   * use named variables
   */
    int a{2};
    int b{4};
    const int &result2 = min(a, b);
    std::cout << result2;
  /*
   * or pass args by value
   * const int min(const int n, const int m);
   */
}
