#include <iostream>
/* output what is the longest streak before 0 (zero) is met */

int main(){
  int num = 0;

  int counter = 0;
  int max_length = 0;
  int input = 0;

  std::cout << "Enter number : ";
  std::cin >> num;

  int array[num];

  std::cout << "Provide input for " << num << " numbers" << '\n';

  for(int i=0;i<num;i++){
    std::cin >> input;
    array[i] = input;
  }

  for(int i=0;i<num;i++){
    if (array[i] == 0){
      counter = 0;
    }else{
      counter += 1;
      max_length = std::max(max_length, counter);
    }
  }
  std::cout << "Longest streak before 0 is " << max_length << '\n';
}
