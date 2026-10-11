#include <iostream>
#include <algorithm>
#include <vector>

void lambda_example3(){
  std::vector<int> numbers = {30, 10, 4, 10, 12, 9, 2, 6, 5, 3, 6};

  std::vector<int> transformed_numbers;
  std::transform(numbers.begin(), numbers.end(), std::back_inserter(transformed_numbers), [](int x) {
      return x / 2;
  });
  auto print {[](int x){
      std::cout << x << " ";
    }
  };
  std::for_each(transformed_numbers.begin(), transformed_numbers.end(), print);
}

void lambda_example2(){
  /* Universal lambda C++ 20 */

  auto add = [](auto x, auto y){
    return x + y;
  };
  std::cout << "Result (int): " << add(10, 20) << '\n';
  std::cout << "Result (double): " << add(10.5, 20.3) << '\n';
}

void lambda_example1(){
  int x = 10;

    // Initializing capture in C++14
    auto lambda = [y = x + 1]() {
        std::cout << "Value of y: " << y << std::endl;
    };

    lambda();
}

int main(){
  lambda_example1();
  lambda_example2();
  lambda_example3();
}
