#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main() {
 ifstream inputFile("log.txt");
 string line;
if (inputFile.is_open()) {
 cout << "File is open";
}else {
 cout << "File is not open\n";
}

 while (getline(inputFile, line)) {
 cout << line << endl;
 }

 inputFile.close();
 cout << "PRogram finished" << endl;
 cout << "CWD: " << filesystem::current_path() << endl;
return 0;
}
