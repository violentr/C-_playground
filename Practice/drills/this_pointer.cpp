#include <iostream>
#include <string>

class MyClass {
private:
  std::string description;
public:
    void display() {
        std::cout << "The address of the object is: " << this << std::endl;
    }

    void set_description(const std::string &description){
      this->description = description;
    }
    std::string get_description(){
      return this->description;
    }
};

class Box {
public:
    int length;
    int breadth;
    Box &set_length(int length) {
        this->length = length;
        return *this;
    }
    Box &set_breadth(int breadth) {
        this->breadth = breadth;
        return *this;
    }
    void description(){
      std::cout << "Box's length: "<< this->length << " and breadth: " << this->breadth << '\n';
    }
};

int main() {
    MyClass obj;
    obj.display();
    obj.set_description("Default");
    std::cout << "This is "<< obj.get_description() << " description \n";
    std::cout << "The address of the object is: " << &obj << std::endl;
    Box box;
    box.set_length(10).set_breadth(20);
    box.description();
    return 0;
}
