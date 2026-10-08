#include <iostream>

int sum(int a1, int a2, int a3) {
    // Write code here
    int max = 0;
    if (a1 >= a2 && a1 >= a3){
        max = a1;
    }else if (a2 >= a1 && a2 >= a3){
        max = a2;
    }else{
        max = a3;
    }
    return a1+a2+(max*max);
}

int main(){
  int a = 1;
  int b = 5;
  int c = 5;
  std::cout << "Largest sum " << a << " " << b  << " " << c << " =>" << sum(a, b, c);
}
