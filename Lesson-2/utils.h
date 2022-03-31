#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>

using namespace std;
#define DEBUG

void splitString(vector<string> msg, string sep){
    for (const string &word : msg)
    {
        cout << word << sep;
    }
}

void splitStringV2(vector<string> msg, string sep){
    for (int i=0;i<msg.size();++i)
    {
        cout << msg[i] << sep;
    }
}
void castToString(int variable){
    // variant 1
    string a  = to_string(variable);
    cout << "Int converted to string: " << a << endl;
    // variant 2
    char s = variable + '0';
    const char * type = typeid(s).name();
    const char * letter = "c";

    if (strcmp(type, letter) == 0){
        printf("Type: %c \n", *type);
        printf("Converted to string '%c' \n", s);

    }
}
 