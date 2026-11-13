#include <iostream>
using namespace std;

/* Shape is an abstract class, can't be instantiated */
class Shape {
  public:
  virtual ~Shape() = default;

  /* Once you’ve placed a pure virtual function in the base class, you must
   * override it in all the derived classes from which you want to instantiate
   * objects. If a class doesn’t override the pure virtual function, it becomes
   * an abstract class itself, and you can’t instantiate objects from it
   * (although you might from classes derived from it). For consistency, you may
   * want to make all the virtual functions in the base class pure */

    /* Pure Virtual Member Function */
  virtual float getArea() = 0;
};

class Rectangle : public Shape {
  float width;
    float height;

  public:
    Rectangle(float wid, float heigh) {
      width = wid;
      height = heigh;
    }
    float getArea() override  {
      return width * height;
    }
};

class Circle : public Shape {
  float radius;

  public:
    Circle(float rad){
      radius = rad;
    }
    float getArea() override{
      const float PI = 3.14159f;
      return  PI * radius * radius;
    }
};

class Square : public Shape {
  float length;

  public:
    Square(float len){
      length = len;
    }
    float getArea() override{
      return length * length;
    }
};

int main() {
  Shape * shape[3];
  //Shape * shape1 = new Shape(); //Instantiating the shape object (abstract class)

  Rectangle r(2, 6);
  shape[0] = &r;   // Referencing Shape class to Rectangle object

  Circle c(5);
  shape[1] = &c;   // Referencing Shape class to Circle object

  Square s(10);
  shape[2] = &s;     // Referencing Shape class to Circle object

  for(auto & i : shape)
    cout << i->getArea() << endl;
}
