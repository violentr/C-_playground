#include <iostream>
#include <string>

class Car {
  private:
    std::string m_brand;


  public:
    Car(const std::string &brand): m_brand{brand}{
      std::cout << "Car: " << m_brand << '\n';
    }
    Car(const Car &other) : m_brand{other.m_brand}{
      std::cout << "Car copied: " << m_brand << '\n';
    }
    Car(){
      std::cout << "Car created, no brand!\n";

    }
    ~Car() { // destructor
      std::cout << "Car destroyed: " << m_brand << '\n';
    }
};

struct CarStruct {
  std::string brand;
  std::string color;
};

int main(){
    CarStruct cs;
    cs.brand = "Volvo";
    cs.color = "blue";

    CarStruct *cs2 = new CarStruct;
    cs2->brand = "Audi";
    cs2->color = "red";

    CarStruct auto_collection[2];
    auto_collection[0] = cs;
    auto_collection[1] = *cs2;

    std::cout << "Printing auto collection: \n";
    for(CarStruct &i : auto_collection){
      std::cout << "Brand: " << i.brand << '\n';
    }
    delete cs2;

    Car car;
    Car *bmw = new Car("bmw");
    Car ford = Car("ford");
    Car copy = Car(ford);
    delete bmw;

    std::cout << "And here is the end of the main() function\n";
    return 0;
}
