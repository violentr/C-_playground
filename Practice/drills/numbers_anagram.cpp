#include <iostream>
#include <algorithm>

/* Write a program that gets a natural number N from input. In the next N lines
 * you have two numbers, A and B. Output how many of those pairs of numbers are
 * anagrams */

/* Input  3 123 231 4567 6574 2345 2874 , Result -> 2 */

bool anagram(int a, int b){
  std::string str, str2;

  if ( a > 0 && b > 0){
    str = std::to_string(a);
    str2 = std::to_string(b);

    std::sort(str.begin(), str.end());
    std::sort(str2.begin(), str2.end());
  }else{
    return false;
  }
  return str == str2;
}

int main(){
  int n{0};
  int count{0};

  std::cin >> n;

  for(int i=0;i<n;++i){
    int a, b;
    std::cin >> a >> b;

    if(anagram(a, b)){
      ++count;
    }
  }
  std::cout << "Result: " <<  count;
  return 0;
}
