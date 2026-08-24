#include <iostream>
#include <vector>

std::vector<int> populate(std::vector<int> numbers){

  for(int num;std::cin >> num;){
    numbers.push_back(num);
  }
 return numbers;
}

void print_numbers(const std::vector<int>& numbers){

  for(int num : numbers){
    std::cout << num << " ";
  }
}

int main(){
  std::vector<int>numbers;
  auto data = populate(numbers);
  print_numbers(data);
  std::cout << "\nData size is: " << data.size() << std::endl;
}
