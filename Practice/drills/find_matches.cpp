#include <iostream>
#include <vector>

std::vector<int> find_matches(const std::string& str, const std::string &substr){
  std::vector<int> matches;
  int matched = str.find(substr, 0);

  while(matched != std::string::npos){
    matches.push_back(matched);
    matched = str.find(substr, matched + 1);
  }
  return matches;
}
template<typename T>

void loop(T &vec){
  for(size_t i=0;i<vec.size();i++){
     std::cout << vec[i] << " " ;
  }
}
int main(){
  std::string str = "To be or not to be";
  std::vector result = find_matches(str, "be");
  loop(result);
}
