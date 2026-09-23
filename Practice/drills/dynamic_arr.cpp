#include <iostream>

int main() {
    int *numbers = nullptr; // Initialize the dynamic array pointer
    int size = 0;

    int input;
    char choice;

    do {
        std::cout << "Enter a number: ";
        std::cin >> input;

        // Increase the size of the dynamic array by 1
        int* temp = new int[size + 1];

        for (int i = 0; i < size; i++) {
            temp[i] = numbers[i];
        }
        temp[size] = input;

        delete[] numbers; // Deallocate the old array
        numbers = temp; // Assign the new array

        size++; // Increment the size

        std::cout << "Do you want to enter another number? (Y/N): ";
        std::cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    // Calculate the average
    double sum = 0.0;
    for(int i = 0; i < size; i++){
        sum += numbers[i];
    }
    double average = sum / size;

    std::cout << "Average: " << average << std::endl;

    delete[] numbers; // Deallocate the dynamic array

    return 0;
}
