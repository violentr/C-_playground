#include <string>
#include "vehicle.h"

#ifndef CAR_H
#define CAR_H

class Cars: public Vehicle{
  std::string mTrunkSize;

  public:
  Cars();

  Cars(std::string mk, std::string col, int yr, std::string mdl, std::string ts);
  ~Cars();

  void carDetails();
};

#endif

