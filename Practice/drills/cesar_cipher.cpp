#include <iostream>
#include <string>
#include <cctype>

std::string ceasar_cipher(const std::string &str, int key, bool encrypt=true){
    std::string result = "";
    int char_code;
    if(encrypt) key = -key;
    for(char c : str){

      if (std::isalpha(static_cast<unsigned char>(c))){
        char_code = (int)c + key;
        char base = std::isupper(static_cast<unsigned char>(c)) ? 'A' : 'a';
        std::cout << "Charcode: " << char_code << '\n';
        char_code = (char_code - base) % 26;
        if (char_code < 0) char_code += 26;
        result += char(base + char_code);
      }else{
        result += c;
      }
    }

    return result;
}
int main() {
    std::string s = "Make me secret";
    std::string encrypted = ceasar_cipher(s, 5);

    std::cout <<"Encrypted: " << encrypted << '\n';
    std::string decrypted = ceasar_cipher(encrypted, 5, false);
    std::cout <<"Decrypted: " << decrypted << '\n';
}

