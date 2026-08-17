#include <iostream>

int main() {
    int u = 1;
    unsigned int i = -1;
    cout << "(i < u) ? => " << (i < u) << endl;

    int x = 0;
    x--;        // x becomes -1
    unsigned int f = (unsigned)x;
    cout << f << endl;
}
