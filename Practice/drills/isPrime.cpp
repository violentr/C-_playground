#include <iostream>
using namespace std;

/* A prime number has exactly two factors (1 and the number itself). */

static bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i=2; i<number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
  for (int i=0; i<=10; i++) {
    cout << "Number "<< i << " is prime = " << std::boolalpha << isPrime(i) << endl;
  }
}
