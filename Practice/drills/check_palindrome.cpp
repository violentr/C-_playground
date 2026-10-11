#include <algorithm>
#include <iostream>
#include <string>

auto string_tolower(std::string &str){
     std::transform(str.begin(), str.end(), str.begin(),[](unsigned char c){ return std::tolower(c); });
}

// Lambda to check if is palindrome
auto check_is_palindrome {[](std::string word) -> bool {
    std::string original {word};
    std::string reversed {word};
    string_tolower(original);
    string_tolower(reversed);
    std::reverse(reversed.begin(), reversed.end());

    return original == reversed;
}};

int main(){
  std::string word = "Anna";
  std::cout << "Is " << word << " palindrome: " <<  std::boolalpha << check_is_palindrome(word) << std::endl;
}
