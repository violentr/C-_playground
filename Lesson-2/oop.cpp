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

void Simple::printNumbers(){
    const int SIZE = 11;
    int array[SIZE] = {0};

    // populate array with numbers
    for(int i=0; i<SIZE - 1; i++){
        array[i] = i + 1;
    }

    int * arrayPtr;

    arrayPtr = &array[0]; // same as arrayPtr = array;
    while (*(arrayPtr) != 0){
        cout << *arrayPtr << " " << flush;
        ++arrayPtr;
    }
    cout << "\n" << "While loop / Number of elements before zero: " << (arrayPtr - array) << endl;
    cout << endl;

    // same functionality as above using for loop
    arrayPtr = &array[0];

    for(int i=0; i < SIZE ; i++){
        if( *(arrayPtr) == 0){
            break;
        }
        printf("%d ",  *(arrayPtr) );
        arrayPtr++;

    }
    cout << "\n" << "For loop / Number of elements before zero: " << (arrayPtr - array) << endl;
}