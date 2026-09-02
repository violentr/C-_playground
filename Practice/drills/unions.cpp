#include <iostream>

const double PI = 3.14;

template <typename T>

static T circle_area(T radius){
  if (radius > 0){
    return PI * (radius * radius);
  }
  return 0;
}

struct Circle {
  int radius;
  union shape_union {
    double d_radius;
    int i_radius   ;
  }circle_data;
};

int main(){
  Circle circle;
  circle.circle_data.d_radius = 12.4;
  double d_radius = circle.circle_data.d_radius;

  std::cout << "Circle area (Double) " << circle_area(d_radius) << '\n';
  std::cout << "Circle area (Zero) " << circle_area(0.0) << '\n';

  circle.circle_data.i_radius = 15;
  int i_radius = circle.circle_data.i_radius;
  std::cout << "Circle area (INT) " << (int)circle_area(i_radius) << '\n';
}
