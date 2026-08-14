#include <iostream>
using namespace std;
static int getUserInput() {
    int number;
    cout << "Type your number: ";
    cin >> number;
    return number;
}
int main() {

    constexpr int i = 10;
    // getUserInput() runs at runtime -> no constexpr possible here.
    const int choice = getUserInput() + i ;
    cout << "Your number is : " << choice;
    return 0;
}
