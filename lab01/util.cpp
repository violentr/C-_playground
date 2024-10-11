#include <iostream>
using namespace std;

template <int N>
void printArray(int (&arr)[N])
/*If you want to keep only one parameter, we can use a template function with a reference to an array.This approach allows the compiler to deduce the array size automatically.Here's a concise version:*/
{
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}