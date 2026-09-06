#include <iostream>
  int g_initialized = 42;
  int g_bss;

void foo(){
  static int static_local = 5;
  std::cout << "static_local " <<  &static_local << " Static/BSS"  << '\n';
}
// Recall the rule: stack = highest addresses (grows down from top), heap = middle/lower, static/BSS = lowest.

int main(){
  std::cout << "g_initialized " <<  &g_initialized << " Static/BSS" << '\n';
  std::cout << "g_bss " <<  &g_bss << " Static/BSS" << '\n';
  int local_main = 0;
  std::cout << "local_main " <<  &local_main << " STACK" << '\n';
  foo();
  int *h = new int(7);
  std::cout << "h "<<  h << " HEAP" <<  '\n';
}
