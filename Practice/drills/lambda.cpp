#include <iostream>
#include <vector>
//
// Lambda

int sum(std::vector<size_t> &v){
  size_t sum = 0;
  for_each(v.begin(), v.end(), [&](size_t x) {return sum += x;});
  return sum;
}

int main(){
  std::vector<size_t> vec {1,12,34,56,12};
  std::cout << "Sum is: " << sum(vec);
}
