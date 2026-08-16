#include <iostream>

static void rangeForReference(){
  int numbers[] = {1,2,3,4,5,6};
  cout << "Print numbers: " << endl;

  for (auto& x : numbers){
    cout << x << endl;
  }
}

int main(){
  rangeForReference();
}
