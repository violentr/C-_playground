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

Cars::~Cars(){
  std::cout << "Called destructor for Cars " << std::endl;
}
void Cars::carDetails(std::string offer){
  printDetails();
  std::cout << "You are LUCKY to have this car for this price! " << offer << "% off " << std::endl;
  std::cout << "Trunk size: " << mTrunkSize << std::endl;
}
