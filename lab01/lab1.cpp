#include <iostream>
#include <vector>
#include "util.h"

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    arr[size] = 6;
    cout << size << endl;
    // vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));
    // vector<int> vec = {1, 2, 3, 4, 5};
    for (int i = 0; i < size + 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing array" << endl;
    printArray(arr);
    return 0;
}