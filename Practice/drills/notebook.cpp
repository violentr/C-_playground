#include <iostream>

void notebook(size_t a, size_t b, size_t c){
    if (c - b == a){
        std::cout << a << "+" << b << "=" << c;
    }else if ( c / b == a){
        std::cout << a << "*" << b << "=" << c;
    }else if ( a / b == c ){
        std::cout << a << "/" << b << "=" << c;
    }else if ( a - b == c){
        std::cout << a << "-" << b << "=" << c;
    }else{
      std::cerr << "Not working combination!\n";
    }
}
int main() {
    size_t a, b, c;
    /* 3, 5 , 15 */
    std::cout << "Enter 3 numbers: \n";
    std::cin >> a >> b >> c;
    std::cout << "Result: ";
    notebook(a, b, c);
    return 0;
}
