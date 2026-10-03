#include <iostream>
#include <string>

void output_middle_digit(){
  std::string n;

    std::cin >> n;
    std::cout << "Middle digit: " << n[n.size()/2];
}

int main() {
    std::cout << "Enter digit: "<< '\n';
    output_middle_digit();
    return 0;
}
