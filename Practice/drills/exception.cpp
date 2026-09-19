#include <iostream>

void division(double n, double m){
  try {
    if (m == 0){
      throw "Division by 0 is not possible";
    }
    else {
      printf("%.2f / %.2f = %.2f\n", n, m , n / m);
    }
  } catch (const char * exception){
    std::cout << "Error " << exception << '\n';
  }
}

void division_v2(double n, double m){
  try {
    if (m == 0){
      throw std::runtime_error("[V2] Division by 0 is not possible");
    }
    else {
      printf("%.2f / %.2f = %.2f\n", n, m , n / m);
    }
  } catch (std::exception &error){
    std::cout << "[V2] Handled exception" << error.what() << '\n';
  } catch (...){
    std::cout << "Default exception catch \n";
  }
}

int main() {
  int num1, num2;
  num1 = num2 = 0;
  std::cout << "Enter 1st number: ";
  std::cin >> num1;
  std::cout << "Enter 2nd number: ";
  std::cin >> num2;
  division(num1, num2);
  std::cout << "Calling [V2] \n";
  division_v2(num1, num2);
}
