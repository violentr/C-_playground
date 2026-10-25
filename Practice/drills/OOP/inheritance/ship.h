#include "vehicle.h"

#ifndef SHIP_H
#define SHIP_H

class Ships: public Vehicle{
  int mNumberOfAnchors;

  public:
  Ships();

  Ships(std::string mk, std::string col, int yr, std::string mdl, int na);
  ~Ships();
  void shipDetails();
};

#endif
