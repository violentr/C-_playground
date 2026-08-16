#include <iostream>
using namespace std;


int main(){
  int arr[] = {1,2,3,4,5,6};
  int len = sizeof(arr)/sizeof(arr[0]);

  for (int* i=&arr[0]; i< arr + len;i++){
    cout << *i << endl;
  }
}
