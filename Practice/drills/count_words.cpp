#include <iostream>
#include <string>
#include <cctype>
void count_words(std::string str){
  bool isWord = false;
  int w_count = 0;
  for (char c : str){
    if (!std::isspace(static_cast<unsigned char> (c)) && !isWord){
      isWord = true;
      w_count += 1;
    }else if (std::isspace(static_cast<unsigned char> (c))){
      isWord = false;
    }
  }
  std::cout << "Words count : " << w_count << '\n';

}
int main(){
  std::string str = "hello there nice to meet you";
  count_words(str);
}
