#include <iostream>
#include <cstdlib>

const int NUMBER = 10;

inline void odd (int x){
  if ((x%2)!=0) std::cout << x << " It is odd.\n";
  else std::cout << x << " It is even \n";
}

template<class T>
T summ(T a, T b){
  return a + b;
}

template<class T, class U>
bool are_equal(T a, U b){
  return a == b;
}

int main(){
  for(int i=1; i<=NUMBER;++i){
    odd(i);
  }
  std::cout << summ(3, 6) << '\n';
  std::cout << summ(3.0, 6.5) << '\n';
  int x = summ<int>(3, 8);
  std::cout << x << '\n';
  std::cout << "Are equal: " << std::boolalpha << are_equal(10, 10.0) << '\n';
  // same as are_equal<int, double>(10, 10.0)
  return EXIT_SUCCESS;
}
