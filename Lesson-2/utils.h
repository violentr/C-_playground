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
    printf("C++ / Reading file: %s \n", fileName);
    string line;
     while ( getline (dataFile, line) )
    {
      cout << line << '\n';
    }
    dataFile.close();
    printf("File was closed \n\n");
}

// Pure C lang
void readFileC(char * fileName){
    printf("C / Reading file: %s \n", fileName);
    FILE * inFile;
    int ch;
    inFile = fopen(fileName, "rb");
    if (inFile == NULL){
        printf("File can\'t be opened %s", fileName);
        exit(1);
    }
    while(true){
        ch = fgetc(inFile);
        if( ch == EOF){
            break;
        }else{
           printf("%c", ch);
        }
    }
    fclose(inFile);
    printf("File was closed \n\n");
}

void writeFileC(char * fileName){
    printf("C / Writing file: %s \n", fileName);
    FILE * outFile;
    outFile = fopen(fileName, "w");
    char content[]= "The only line in this file !\n";
    if (outFile == NULL){
        printf("Error opening file");
        exit(1);
    }
    fprintf(outFile, "%s", content);
    fclose(outFile);
    printf("File was closed \n\n");
}

void appendToFile(char * fileName){
    ofstream dataFile;
    dataFile.open(fileName, ios_base::app);
    if(dataFile.is_open()){
        dataFile << "New line written ! \n";
    }else{
        cerr << "Unable to open " << fileName << endl;
    }
    dataFile.close();
}