#include <iostream>
#include <vector>

int main(){
  std::vector<int> numbers{1,2,3,4,5,6,7,14};
  std::vector<int> result;
  std::copy_if(numbers.begin(),numbers.end(),std::back_inserter(result),[](int n) { return n % 2 == 0;});

  std::cout << "Print even numbers \n";
  for(int i : result ){
    std::cout << i << " ";
  }
}
