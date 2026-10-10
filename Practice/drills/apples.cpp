#include <iostream>
#include <cstdlib>

/* split apples equally among your children, if the number is  not
 * divisible with 4, need to buy more apples, apple cost $1
 * output how many dollar you will spend, you should spend as little
 * as possible */

int apples(int a1) {
    int dollars = 0;
    size_t kids_count = 4;

    if (a1 < 0) return 0;
    if (a1 % kids_count == 0) return dollars;

    while (a1 % kids_count !=0){
        ++a1;
        ++dollars;
    }
    return dollars;
}

int main(){
  int number_apples = 0;
  std::cout << "Enter number of apples, more then 4: \n";
  std::cin >> number_apples;

  std::cout << "You will spend: $"<< apples(number_apples);
}
