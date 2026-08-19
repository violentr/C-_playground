#include <iostream>
using namespace std;
const int MAX = 10;

void init_array2(const int *data) {
    /* quick processing */
    for (int i = 0; i < MAX; i++) {

        cout << *(data + i) << " ";
    }
}

 void init_array1(int data[]) {
    /* slower processing */
    for (int i = 0; i < MAX; i++) {

        cout << data[i] << " ";
    }
}

int main() {

    int data[MAX];
    for (int i = 0; i < MAX; i++) {
        data[i] = i;
    }
    cout << "Processing quicker -> int *data" << endl;
    init_array2(data);
    cout << endl;
    init_array2(&data[0]);
    cout << endl;
    cout << "Processing slower -> int data[]" << endl;
    init_array1(data);
}

