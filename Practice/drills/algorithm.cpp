#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

void sorted(std::vector<int> &numbers){
  std::sort(numbers.begin(), numbers.end());
}
void loop(const std::vector<int>& numbers){
  for(int number : numbers){
      std::cout << number <<  " " ;
  }
}

int find_index(const std::vector<int>& numbers, int search){
  auto iter = std::find(numbers.begin(), numbers.end(), search);
  int position = 0;
  if (iter != numbers.end()){
    position = std::distance(numbers.begin(), iter);
    return position;
  }
  return -1;
}

int summ(const std::vector<int>& numbers){
  return std::accumulate(numbers.begin(),numbers.end(), 0);
}

int count(const std::vector<int>& numbers, int num){
  return std::count(numbers.begin(), numbers.end(), num);
}

void reverse(std::vector<int>& numbers){
  std::reverse(numbers.begin(), numbers.end());
}

int main(){
  std::vector<int> numbers = {1,2,5,4,7,3,2};
  std::cout << "Sorting numbers "<< std::endl;
  sorted(numbers);
  loop(numbers);
  int position = find_index(numbers, 7);
  if (position != -1){
    std::cout << '\n' << "Number was found at position " << position;
  }else{
    std::cout << "Number was NOT found " << '\n';
  }
  std::cout << '\n' << "Summ of numbers " << summ(numbers) << '\n';
  std::cout << "Count of number [2] " << count(numbers, 2) << '\n';
  reverse(numbers);
  loop(numbers);
}
