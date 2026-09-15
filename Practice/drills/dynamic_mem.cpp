#include <iostream>

void play_with_dynamic_memory(){
    int times = 0;
    int input;
    int counter = 0;
    std::cout << "Enter how many numbers: ";
    std::cin >> times;
    int *numbers = new int[times];

    while(counter<times){
        std::cout << "Enter " << counter << " number" << '\n';
        std::cin >> input;
        numbers[counter] = input;
        counter++;
    }
    std::cout << "Printing your numbers; " << '\n';
    for (int i=0;i<times;i++){
        std::cout << numbers[i] << '\n';
    }
    delete[] numbers;
}

int main(){
    play_with_dynamic_memory();
    return 0;
}
