#include<iostream>

void reverseArray(int * arr, int size){
  int * start = arr;
  int * end = arr + size - 1;

  while (start < end) {
    int temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}

void loop(int *array, int size){
  for(int i=0;i<size;i++){
    std::cout << *(array + i) << " ";
  }
}

int main(){
  int size = 5;
  int input = 0;
  int i = 0;
  int numbers[size];
  std::cout << "Enter " << size << " numbers: \n";
  while(i < size){
    std::cin >> input;
    numbers[i] = input;
    i++;
  }
  std::cout << "Result of reverse array function \n";
  reverseArray(numbers, size);
  loop(numbers, size);
}
