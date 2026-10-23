#include <iostream>
#include "circle.h"

int main() {
  Circle c(5);
  std::cout << "Area: " << c.area() << std::endl;
  std::cout << "Perimeter: " << c.perimeter() << std::endl;
}
