#include <iostream>
#include <string>

#include "vehicle.h"
#include "ship.h"

Ships::Ships(){
  mNumberOfAnchors = 0;
}

Ships::Ships(std::string mk, std::string col, int yr, std::string mdl, int na) :Vehicle(mk, col, yr, mdl){
  mNumberOfAnchors = na;
}
Ships::~Ships(){
  std::cout << "Called destructor for Ships " << std::endl;
}
void Ships::shipDetails(){
  printDetails();
  std::cout << "Number of Anchors: " << mNumberOfAnchors << std::endl;
}
