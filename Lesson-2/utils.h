#include <iostream>
#include <vector>
#include <string>

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