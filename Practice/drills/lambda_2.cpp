#include <iostream>
#include <string>

void lambda_example2(){
  std::string first_word {"Hello"};
  std::string second_word {"there"};

  auto writeSentence{[=]() { // Capture all variables by value
    std::cout << first_word << " " << second_word << std::endl;
  }};
  writeSentence();
}

void lambda_example1(){
  std::string word = "Hi";
  auto compare { [&word](const std::string other_word) {
    return word == other_word;
  }};

  if (compare("Hi")) {
    std::cout << "Congrats! Your word is Hi" << std::endl;
  } else {
    std::cout << "Bad luck, try again" << std::endl;
  }
}
int main(){
  int number1= 10;
  int number2 = 20;

  auto change_values{[&](int x, int y){
    number1 = x;
    number2 = y;
  }};

  change_values(3, 5);

  std::cout << "Values changed to : " << number1 << " and " << number2 << std::endl;

  lambda_example1();
  lambda_example2();

  auto multiply_by_ten {[](int x) {
    return x * 10;
  }};

  std::cout << "Multiply by ten: " << 3 << " = " << multiply_by_ten(3);

}
