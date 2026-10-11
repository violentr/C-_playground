#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

int main() {
    std::vector<int> numbers;
    std::string line;
    int input;

    std::cout << "Enter your numbers: ";
    std::getline(std::cin, line);
    std::istringstream iss(line);

    while (iss >> input) {
        numbers.push_back(input);
    }

    // Sort the vector in descending order using std::sort
    std::sort(numbers.begin(),numbers.end(), [](int x, int y){ return x > y;});

    // Multiply each element by 2 using std::transform
    std::transform(numbers.begin(),numbers.end(),numbers.begin(), [](int x){ return x *= 2; });


   // Output  the first and the last element
    std::cout << "After data manipulation\n"; std::cout <<  "first and last number: ";
    std::cout << numbers.front() << " "<< numbers.back() << std::endl;

    std::cout << std::endl;

    return 0;
}
