#include <iostream>

enum class Color : int { red, green, yellow };
enum Traffic { red, green, yellow };

int main(){
  int n = green;
  Color c = Color::red;
  std::cout << "Traffic " << n << '\n';
  std::cout << "Sizeof (Color) " << sizeof(Color) << " ";
}
