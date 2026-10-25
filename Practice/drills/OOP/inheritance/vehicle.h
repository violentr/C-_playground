#include <string>

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle{
  protected:
  std::string mMake;
  std::string mColor;

  int mYear;
  std::string mModel;

  public:
  Vehicle();

  Vehicle(std::string mk, std::string col, int yr, std::string mdl);
  ~Vehicle();

  void printDetails();
  void carDetails();

};

#endif
