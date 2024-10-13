#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

template <typename T, int N>
void printArray(T (&arr)[N])
/* If you want to keep only one parameter,
we can use a template function with a reference to an array.
This approach allows the compiler to deduce the array size automatically.
Here's a concise version: */
{
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
// const vector<int> &vec is a reference to a constant vector of integers
// we use const to ensure that the function does not modify the vector
void iteratorFunction(const vector<int> &vec)
{
    cout << "Printing vector with iterator" << endl;
    // Using an iterator to traverse the vector
    for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        cout << *it << " "; // Dereferencing the iterator to get the value
    }
    cout << endl;
}
// const vector<int> &vec is a reference to a constant vector of integers
// vector is passed by reference to avoid copying
// we use copy so that we can print the vector elements without explicit dereferencing
void rangeBasedForLoop(const vector<int> &vec)
{
    cout << "Printing vector with range based for loop" << endl;
    cout << "Output the vector elements without explicit dereferencing" << endl;
    copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;
}