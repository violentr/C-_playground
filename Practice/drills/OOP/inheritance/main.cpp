#include <iostream>
#include <string>

#include "car.h"
#include "ship.h"

int main(){
  Cars car("Chevrolet", "Black", 2010, "Camaro", "9.1 cubic feet");
  car.carDetails("20");


  // Casting car to vehicle
  static_cast<Vehicle&>(car).carDetails();

  std::cout << std::endl;

  Ships ship("Harland and Wolff, Belfast", "Black and whilte",
            1912, "RMS Titanic", 3);
  ship.shipDetails();
}
