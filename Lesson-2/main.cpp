#include <iostream>
using namespace std;
#include "utils.h"
#include "oop.h"
#include "extra.h"


int main()
{
    #ifdef DEBUG

        cout << "Debug mode is ON \n" << endl;
    #endif
    splitString({"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"}, ":");
    printf("\n\n");
    splitStringV2({"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"}, "\n");

    char userName []="admin";
    char * pName = userName;
    printf("\n Level: %s, Points to address: %p\n", pName, pName);
    cout << endl;

    // Play with OOP
    Simple c = Simple();
    c.greet();
    cout << endl;
    char name[] = "Jane";
    Simple d = Simple(name);
    d.greet();

    // play with friend functions
    greetPerson(d);

    // play with pointers
    cout << endl;
    d.printNumbers();
    // Play with type casting
    cout << endl;
    castToString(7);
    char fileName[] = "file.txt";
    cout << endl;
    // Play with File
    readFile(fileName);
    readFileC(fileName);
    appendToFile(fileName);
    writeFileC(fileName);

    // Convert (hex, dec)
    int number = 0x3FF;
    cout << "Dec number: " << number << endl;

    number = 15;
    cout << "Number in hex: " << hex << number << endl;

    cout << endl;

    movies_t movie1, movie2, *ptrMovie;


    movie1.title = "New movie 1";
    movie1.year = 2022;

    movie2.title = "New movie 2";
    movie2.year = 2021;

    char attr[] = "title";
    printAttribute(movie1, attr);
    cout << endl;
    ptrMovie = &movie2;
    printAttribute(ptrMovie, attr);

    struct person *newPtr;
    newPtr = new person;

    strncpy(newPtr->name, name, sizeof(newPtr->name));
    printf("Hello %s, welcome to the club! \n", newPtr->name);
    delete(newPtr);
    newPtr = NULL;

    d.setName((char *) "James");

    int index = countWords("Just an example here move along", " ");
    cout << index << endl;

    char myName[] = "Djek, how are you?";
    char * newName = (char *)greating(myName);
    printf("\nGreeting: %s\n", newName);
}


