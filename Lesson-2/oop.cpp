#include <iostream>
#include "oop.h"

Simple::Simple(){
    string name = "Jack";
}

Simple::Simple(const char name[]){
    this->name = name;
}

void Simple::greet(){
    cout << "Hello " << this->name << endl;
    printf("Nice to e-meet you %s !\n", (this->name).c_str());
}
// Friend method
void greetPerson(Simple o){
    cout << "Hello " << o.name << endl;
}