#include <iostream>
#include <string>

static bool isVowel(const unsigned char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
static int countVowels(const std::string &str) {
    int count = 0;
    for (unsigned char c : str) {
        c = tolower(c);
        if (isVowel(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str;
    std::cout << "Enter your string: ";
    getline(std::cin, str);
    std::cout << "The number of vowels in the string is: " << countVowels(str) << std::endl;
    return 0;
}

