#include <iostream>
#include <string>
#include <array>


int main(){
  int data[] = {1,2,3,4,5};
  /* convert int [] to iterator */
  int * it = std::begin(data);
  int * it_end = std::end(data);
  for (int *i = it; i!= it_end ;i++){
    std::cout <<  " " << *i ;
  }
  std::cout << "\n";

  for (auto &i : data){
    std::cout <<  " " << i ;
  }

  std::cout << "\n";
  std::array <int,5> data2 = {1,2,3,4,5};
  /* auto could be used instead of std::array<int.5>::iterator type */
  for(std::array<int,5>::iterator i = data2.begin(); i != data2.end();i++){
    std::cout <<  " " << *i ;
  }
}
