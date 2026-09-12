#include <limits>
#include <iostream>
#include <cstdlib>

void print_miles(){
  std::string input;
  double mile_in_km = 1.60934;
  double miles;

  std::cout << "Enter miles: ";
  std::cin >> input;
  miles = std::stod(input);
  std::cout << input << "  miles equals "  << (miles * mile_in_km) << " kilometers";
}

int main(){
  std::cout << "Min number for Double: " << std::numeric_limits<double>::min() << '\n';
  std::cout << "Max number for Double: " << std::numeric_limits<double>::max() << '\n';
  printf("String formatting: %s %d %5d %c\n", "hello", 10, 5, 'A');
  print_miles();
}
