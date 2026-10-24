#include <iostream>
#include <string>

#include "vehicle.h"
#include "car.h"

Cars::Cars(){
  mTrunkSize = "";
}

Cars::Cars(std::string mk, std::string col, int yr, std::string mdl, std::string ts) :Vehicle(mk, col, yr, mdl){
  mTrunkSize = ts;
}

void Cars::carDetails(){
  printDetails();
  std::cout << "Trunk size: " << mTrunkSize << std::endl;
}
