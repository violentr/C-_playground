#include<iostream>
#define  pretty std::cout << __PRETTY_FUNCTION__ << '\n';

int sum(int n, int m){
  pretty;
  return n + m;
}

int main(){
  sum(4, 5);
}
