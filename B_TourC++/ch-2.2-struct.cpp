#include <iostream>
using namespace std;

int main(){
    // 4 + pad + 8 + 4 + pad = 24
    struct A {
        int x;
        double y;
        int z;
    };

    // 8 + 4 + 4 = 16, no padding
    struct B {
        double y;
        int x;
        int z;
    };
   cout << sizeof(A) << " size of A and " << sizeof(B) << " size of B" << endl;
}
