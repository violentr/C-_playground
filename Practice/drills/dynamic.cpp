#include <iostream>
#include <string>

/* Intro to allocating memory space (heap) dynamically */

std::string* create_guest_list(int guests_number){

  std::string *guest_list = new std::string[guests_number];
  for(int i=0;i<guests_number;i++){
    std::cout << "Enter guest " << i + 1   << '\n';
    std::cin >> guest_list[i];
  }
return guest_list;
}
int main(){
  int guests = 0;
  std::cout << "Expected number of guests: \n";
  std::cin >> guests;

  std::string* guest_list = create_guest_list(guests);
  for(int i=0;i<guests;i++){
    std::cout << "Your guest: " << guest_list[i] << '\n';
  }
  delete[] guest_list;
  return 0;
}
