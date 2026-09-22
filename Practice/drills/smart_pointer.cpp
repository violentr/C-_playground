#include <iostream>
#include <memory>

struct MyStruct{
  int data;
};
void smart_pointer_example3(){
  // Use make_unique (C++14) to create and initialize a unique_ptr
  std::cout << "\nExample -> 3 "<< '\n';
  auto ptr = std::make_unique<int>(42);
  int & data = *ptr;
  std::cout << "Data: " << data << '\n';
  data = 23;
  std::cout << "Modified data: " << data << '\n';
  *ptr = 99;
  std::cout << "Modified ptr: " << *ptr << '\n';
  // The managed object will be deleted automatically when ptr goes out of scope

}

void smart_pointer_example2(){
  std::cout << "\nExample 2 -> "<< '\n';
    std::unique_ptr<MyStruct> ptr(new MyStruct);
    ptr->data = 23;
    std::cout << "Data: " << ptr->data << '\n';
    // The managed object will be deleted automatically when ptr goes out of scope

}

void smart_pointer_example(){

  std::cout << "\nExample -> 1 "<< '\n';
  unsigned int size = 5;
  std::unique_ptr<int[]> arr(new int[size]{1,2,3,4,5});
  for (int i=0;i < size ;i++){
    std::cout << arr[i]  << " ";
  }
  // The managed object will be deleted automatically when ptr goes out of scope
}

int main() {
    std::cout << "Example of smart pointers usage " <<'\n';
    std::unique_ptr<int> ptr(new int(42));

    int *rawPtr = ptr.get(); // Access the raw pointer
    std::cout << "Value: " << *rawPtr << std::endl;

    int &ref = *ptr; // Access the object using operator *
    ref = 23;
    std::cout << "Value: " << ref << std::endl;
    ptr.reset(); // release memory similar to delete ptr

    smart_pointer_example();
    smart_pointer_example2();
    smart_pointer_example3();

    return 0;
}
