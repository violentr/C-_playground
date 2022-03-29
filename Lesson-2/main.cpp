#include <iostream>
using namespace std;
#include "utils.h"
#include "oop.h"

int main()
{
    #ifdef DEBUG
        cout << "Debug mode is ON \n" << endl;
    #endif
    splitString({"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"}, ":");
    
    char userName []="admin";
    char * pName = userName;
    printf("\n Level: %s, Points to address: %p\n", pName, pName);
    cout << endl;

    Simple c = Simple();
    c.greet();
    cout << endl;
    char name[] = "Jane";
    Simple d = Simple(name);
    d.greet();
}