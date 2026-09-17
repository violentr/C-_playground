#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>

void split_string_by_space(const std::string str){
  std::stringstream ss{str};

  char s_space = ' ';
  std::string s_individ_string;
  std::vector<std::string> s_individ_words;

  while(getline(ss, s_individ_string, s_space)){
    s_individ_words.push_back(s_individ_string);
  }
  for (auto i = s_individ_words.begin(); i != s_individ_words.end();i++){
    std::cout << *i << '\n';
  }
}

int main(){
  std::string str = "this is a random string";
  std::cout << "[+] Printing words separated by space \n\n";
  split_string_by_space(str);
  return 0;
}
