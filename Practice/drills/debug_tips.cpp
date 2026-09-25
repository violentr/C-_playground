#include <iostream>
/* Debugging tips */

int main(){
  int number = 2;
  double y = static_cast<double>(number);

  /* check if the same type */
  std::cout << std::boolalpha
  << std::is_same_v<decltype(y), double> << '\n';
}
