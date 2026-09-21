#include <iostream>
#include <string>

namespace code {
  std::string trim_whitespace(const std::string &str){
    std::string result;
    result = str;
    std::string whitespaces = " \t\f\n\r";
    result.erase(0, result.find_first_not_of(whitespaces));
    result.erase(result.find_last_not_of(whitespaces) + 1);
    return result;
  }
}

int main(){
  std::string str = "      this is random string      ";
  std::cout << "String before trim -> " << str << '\n';
  std::string result = code::trim_whitespace(str);
  std::cout << "*" << result <<  "*" << '\n';
}
