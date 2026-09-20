#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

static void from_ascii_to_str(const std::string &str) {
    std::string output;


    if (str.empty()) {
        std::cout << "Looks like the string is empty!\n";
        return;
    }
    if (str.size() % 2 != 0) {
      std::cout << "Bad code format!\n";
      return;
    }

    for (size_t i=0;i<str.size();i+=2) {
      std::string s_char_code = str.substr(i, 2);
      char char_code = std::stoi(s_char_code);
      output += char_code + 23;
    }
    std::cout << "ASCII Decoded string: " << output << '\n';
}

static void convert_num_to_ascii() {
    /* DOG -> 687971 */
    std::string normal_str, ascii_str;
    //std::cout << "Your string will be uppercased \n";
    std::cout << "Enter your string: ";
    std::cin >> normal_str;
    /*std::transform(normal_str.begin(), normal_str.end(),
        normal_str.begin(),
        [](unsigned char c) { return ::toupper(c); }
    );*/
    for (char c: normal_str) {
        std::string char_code = std::to_string((int)c - 23);
        ascii_str += char_code;
    }
    std::cout << "Ascii str: " << ascii_str << '\n';
    from_ascii_to_str(ascii_str);
}

int main() {
 convert_num_to_ascii();
}
