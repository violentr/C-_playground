#include <iostream>
#include <vector>
#include "reverse.h"

int main() {
    std::vector<int> a;
    int x;
    std::cout << "Enter your numbers: ";
    while (std::cin >> x) {
        a.push_back(x);
    }
    std::vector<int> result = reverse(a);
    std::cout << "Your number is reverse order :";
    for (int element : result) {
        std::cout << element << " ";
    }
    return 0;
}

