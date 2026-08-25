#include <iostream>
#include "mymath.h"

int triple(int num){
  if (num > 0) return num*3;
  return -1;
}

int maxOf(int n1, int n2){
  if (n1 > n2)
    return n1;
  return n2;
}
