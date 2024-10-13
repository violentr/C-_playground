#include <iostream>
#include <vector>
#include "util.h"

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    arr[size] = 6;
    double digits[] = {1.1, 2.2, 3.3};

    // Convert arr[] to std::vector
    vector<int> vec(arr, arr + size);
    // vec.push_back(6);
    for (int i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing array" << endl;
    printArray(arr);

    cout << "Printing array (floats)" << endl;
    printArray(digits);

    iteratorFunction(vec);
    rangeBasedForLoop(vec);
    return 0;
}