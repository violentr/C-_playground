#include <stdexcept>
#include <iostream>

void divide_numbers(int a, int b) {
try {
	if (b == 0) {
		throw std::runtime_error("Division by zero is not allowed!");
	}
	int result = a / b;
		std::cout << "Result: " << result << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}

int main(){
  divide_numbers(5, 0);
  return 0;
}
