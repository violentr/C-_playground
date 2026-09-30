#include <iostream>
void check_age(int age){
  try{
    if (age < 18){
      throw "Invalid age. Age must be greater then 18";
    }
    std::cout << "Age is valid. "<< "Your age is " << age << " years old " <<  '\n';

  }catch(const char* err_msg){
    std::cout << "Error: " << err_msg << '\n';
  }
}
void divide_numbers(int a, int b){
  int result;

  try{
    if (b == 0){

      throw "Division by zero is not allowed!";
    }

    result = int(a/b);
    std::cout << "Result: " << result << std::endl;
  }
  catch (const char* errorMessage){
    std::cout << "Error: " << errorMessage << std::endl;
  }
}

int main()
{
    int numerator = 42;
    int denominator = 0;
    int input;
    divide_numbers(numerator, denominator);

    std::cout << "Enter your age: ";
    std::cin >> input;
    check_age(input);
    return 0;
}
