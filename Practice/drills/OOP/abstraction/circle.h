#ifndef CIRCLE_H
#define CIRCLE_H

// Declare all the members of the class here.
class Circle{
  double radius;
  double pi;

  public:
  Circle ();
  Circle(double r);
  double area();
  double perimeter();
};
#endif
