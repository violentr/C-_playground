#include <iostream>

struct Person {
  std::string name;
  int age;
};

Person run_entry(std::istream &iis){
  std::string input;
  int age;
  iis >>input >> age;
  return {input,age};
}
int main(){
  std::cout << "Enter name and age : ";
  auto person = run_entry(std::cin);
  std::cout << "Name: " << person.name << " age: " <<  person.age << " " << '\n';
}
