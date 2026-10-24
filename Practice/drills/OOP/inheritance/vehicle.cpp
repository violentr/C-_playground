#include <iostream>
#include <string>

#include "vehicle.h"

Vehicle::Vehicle() {
    mMake = "";
    mColor = "";
    mYear = 0;
    mModel = "";
  }

Vehicle::Vehicle(std::string mk, std::string col, int yr, std::string mdl){
    mMake = mk;
    mColor = col;
    mYear = yr;
    mModel = mdl;
  }

void Vehicle::printDetails(){
  std::cout << "Manufacturer: " << mMake << std::endl;
  std::cout << "Color: " << mColor << std::endl;
  std::cout << "Year: " << mYear << std::endl;
  std::cout << "Model: " << mModel << std::endl;
}
