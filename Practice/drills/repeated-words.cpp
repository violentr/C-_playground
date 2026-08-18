#include <iostream>
#include <string>
using namespace std;

static void repeatedWords(){
  string current;
  string previous = "";

  while(cin>>current){
    if (current == previous){
      cout << "the same word repeated " << "'" << previous << "'" << endl;
    }
    previous = current;
  }
}

int main(){
  repeatedWords();
}
