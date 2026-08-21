#include <iostream>
#include <string>
using std::cout;

/* Run g++ -std=c++20 -Wall ch-2.3-classes.cpp -o output && ./output */

class Dog {
  std::string name;
  int age;

  public:
  // ConstructorName(parameters) : member{value}, member{value} { body }
  explicit Dog(const std::string& dog_name) :
    name{dog_name},
    age{0}
  {
    info();
  }
  void bark(){
    cout << name << " woof.." << std::endl;
  }
  void birthday(){
    ++age;
  }
  void info(){
    cout << "Constructor called !" << std::endl;
  }
};

int main(){
  Dog d{"Rex"};

  d.birthday();
  d.bark();
}
