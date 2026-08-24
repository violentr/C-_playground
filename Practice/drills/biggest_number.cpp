#include <iostream>
/* Learn about references */

int& biggest(int array[], int size){
  int maxIndex= 0;

  for(int i=0;i<size;i++){
    if (array[i] > array[maxIndex]){
      maxIndex = i;
    }
  }
  return array[maxIndex];
}

int main(){
  int numbers[] = {1,43,123,13,45};
  const int result = biggest(numbers, 5);
  std::cout << "Biggest number: " << result << '\n';

  std::cout << "Modify array with 1000" << '\n';

  /*number 1000 will replace 123 */
  biggest(numbers, 5) = 1000;

  for(int i : numbers){
    std::cout << "N: " << i << '\n';
  }
}
