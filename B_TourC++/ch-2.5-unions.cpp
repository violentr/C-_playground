#include <iostream>

/* tagged union */
enum class Kind {number, text};

struct Entry {
  std::string name;
  Kind kind;
  union {
    int number;
    char * text;
  };

};
/* ------------ */

int main(){
  char text[] = {'n', 'u','m','b','e','r', '\0'};
  Entry e;
  e.name = "age";
  e.kind = Kind::number;
  //e.number = 42;
  e.text = text;
 if (e.kind == Kind::text){
   std::cout << "Print number: " << e.number << '\n';
 }else{
   std::cout << "Print text: " << e.text << '\n';
 }
}
