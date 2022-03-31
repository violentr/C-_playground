#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>
#include <fstream>

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

    if (strcmp(type, "c") == 0){
        printf("Type: %c \n", *type);
        printf("Converted to string '%c' \n", s);

    }
}
 

void readFile(char * fileName){
    ifstream dataFile(fileName);
    // dataFile.open(fileName); same as above;
    printf("Reading file: %s \n", fileName);
    string line;
     while ( getline (dataFile, line) )
    {
      cout << line << '\n';
    }
    dataFile.close();
    printf("File was closed \n");
}