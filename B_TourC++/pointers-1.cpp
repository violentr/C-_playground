#include <iostream>
/* Learn pointers https://cplusplus.com/doc/tutorial/pointers/
 *
 */
void increment_all(int * start, int * stop){
  int * current = start;
  while(current != stop){
    ++(*current);
    ++current;
  }
}


void print_all(const int * start, const int * stop){
const int * current = start;
 while(current != stop){
   std::cout << *current << " ";
   ++current;
 }
}

int main(){
  int numbers[] = {10, 20, 30};
  int len = sizeof(numbers)/sizeof(numbers[0]);
  increment_all(numbers, numbers+len);
  print_all(numbers, numbers+len);
}
