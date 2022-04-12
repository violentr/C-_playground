#include <string>
using namespace std;

class Simple {
    private:
        string name = "Joseph";
    public:
        Simple(void);
        Simple(const char name[]);
        void greet(void);
        void printNumbers();
        void setName(char * name);
        friend void greetPerson(Simple simple);


};