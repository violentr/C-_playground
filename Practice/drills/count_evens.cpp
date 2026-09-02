#include <iostream>
#include <vector>

int main() {
  std::vector<int> nums{10};

  for (int i = 0; i < 10; ++i) {
    nums.push_back(i);
  }
  auto count_evens = std::count_if(nums.begin(), nums.end(), [](int n) {
      return n % 2 == 0;
      });
  std::cout << "Was found " <<  count_evens << " even numbers"  << std::endl;
}

