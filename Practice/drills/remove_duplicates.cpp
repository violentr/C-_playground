#include<iostream>
#include<algorithm>
#include <vector>

std::vector<int> remove_consecutive_duplicates(std::vector<int>&v){
  auto it = std::unique(v.begin(), v.end());
  v.erase(it, v.end());
  return v;
}

void loop(std::vector<int> numbers){
  for (auto i=numbers.begin();i!=numbers.end();i++){
    std::cout << *i << " ";
  }
}
int main(){

  std::vector<int> numbers = {1, 3, 21, 1, 3, 12, 21, 34, 56, 2, 5};
  std::sort(numbers.begin(), numbers.end());
  remove_consecutive_duplicates(numbers);
  std::cout << "Unique numbers: ";
  loop(numbers);
}
