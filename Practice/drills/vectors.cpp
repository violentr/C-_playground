#include <iostream>
#include <vector>
#include <limits>

template <typename T>
void populate(std::vector<T> &numbers) {
    T num;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    // clear and ignore cin errors
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

template <typename T>
void print_numbers(const std::vector<T> &numbers) {
    for (typename std::vector<T>::size_type i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> numbers;              // vector (container)
    std::vector<int> r_numbers;            // vector (container)

    populate(numbers);                     // T = int
    print_numbers(numbers);
    std::cout << "Data size is: " << numbers.size() << '\n';

    populate(r_numbers);                   // stream usable again after clear+ignore
    print_numbers(r_numbers);
    std::cout << "r_numbers size is: " << r_numbers.size() << '\n';
}
