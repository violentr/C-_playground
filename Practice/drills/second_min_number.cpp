#include <iostream>

/* Find second min number from sorted array */
int second_min_number(int array[], int size){
  int min = 214748364;
  int second_min = 214748364;

  for(int i=0;i<size;++i){

    if (array[i] < min){
      min = array[i];
    }else if (array[i] < second_min){
      second_min = array[i];
    }
  }
  return second_min;
}

int main(){
  int array[] = {1, 3, 5, 7, 9};
  int size = sizeof(array) / sizeof(array[0]);

  std::cout << "Second min number: " << second_min_number(array, size);
  return 0;
}
