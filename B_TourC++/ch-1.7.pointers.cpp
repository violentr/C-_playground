#include <iostream>
using namespace std;

void rangeFor() {
    int arr[] = {1,2,3,4,5,6};
    for (auto x:arr){
        cout << x << endl;
    }
}

int main(){
  int arr[] = {1,2,3,4,5,6};
  int len = sizeof(arr)/sizeof(arr[0]);
  int * ptr;

  ptr = &arr[0];
  *ptr = 100;

  for (int* i=&arr[0]; i<arr + len;i++){
    cout << *i << endl;
  }
  rangeFor();
}
