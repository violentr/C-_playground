#include <iostream>
#include <algorithm>
#include <vector>

/* The resulting vector should contain unique elements in sorted order. */
/* do not use std::set_union !! */

void populate(std::vector<int>&v, int n=0){
  for(int i=0;i<5+n;i++){
    v.push_back(i);
  }
}

std::vector<int> sortedUnion(const std::vector<int>& v, const std::vector<int>& v2){
  std::vector<int> result;
  std::merge(v.begin(), v.end(), v2.begin(), v2.end(), std::back_inserter(result));
  auto uniqEnd = std::unique(result.begin(), result.end());
  result.erase(uniqEnd, result.end());
  return result;
}

int main(){
  std::vector<int> s1;
  //std::vector<int> s1{1,3,3,5,5};
  populate(s1);
  std::cout << "Size: " << s1.size() << '\n';
  //std::vector<int> s2{6,7,7,9,10};
  std::vector<int> s2;
  populate(s2, 3);
  std::cout << "Size: " << s2.size() << '\n';
  auto sorted = sortedUnion(s1, s2);
  for (int i : sorted){
    std::cout << i << " ";
  }
}
