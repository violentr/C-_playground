#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

class Shape {
  public:
  /* Virtual means existing in appearance but not in reality.
   * A virtual function is a member function which is declared within the base class and is overridden by the derived class.
   * When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function
   * for that object and execute the derived class’s version of the function
   */

    virtual const char* name() const { return "Shape"; }

    virtual float getArea() const {return 0.0;}
    virtual ~Shape() = default;
};

class Rectangle : public Shape {   // derived form Shape class

  private:
    float width;
    float height;

  public:
    Rectangle(float wid, float heigh) {
      width = wid;
      height = heigh;
    }
    const char* name() const override { return "Rectangle"; }

    float getArea() const override{
      return width * height;
    }
    ~Rectangle() override = default;
};

class Circle : public Shape {
  private:
    float radius;

  public:
    Circle(float rad){
      radius = rad;
    }
    const char* name() const override { return "Circle"; }

    float getArea() const override{
      const float PI = 3.14159f;
      return PI * radius * radius;
    }
    ~Circle() override = default;
};

int main() {
  Rectangle r(2, 6);
  Shape* shape1 = &r;

  cout << "Calling Rectangle from shape pointer: " <<  shape1->getArea() << endl;
  cout << "Calling Rectangle " <<  r.getArea() << endl;

  Circle c(5);
  Shape *shape2 = &c;

  cout << "Calling Circle from shape pointer: " << shape2->getArea() << endl;

  Shape s;
  cout << "Calling Shape (base) " << s.getArea();

  /* Practical example how Polymorphism could be used at runtime */
  std::vector<Shape*> shapes;
  Shape *shape3 = &s;
  shapes.push_back(&r);
  shapes.push_back(shape2);
  shapes.push_back(shape3);

  cout << endl << "Printing shapes from vector: " << endl;

  for(auto shape : shapes){
    cout << (*shape).name() << " Area: " << shape->getArea() << endl;
  }

  Shape* p = new Rectangle(2, 6);
  cout << (*p).name() << " Area: " <<  p->getArea();
  delete p;

}

