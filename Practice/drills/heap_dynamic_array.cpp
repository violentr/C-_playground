#include <iostream>

class DynamicArray {
private:
    int m_size;
    int *data;

public:
    DynamicArray(int size) : m_size{size}{
      data = new int[m_size];
      std::cout << "was allocated " << m_size << " ints " << " on the heap" << '\n';
    }
    void printArrSize(){
        std::cout << "Number of elements in the array: " << m_size << '\n';
    }
    /* destructor */
    ~DynamicArray(){
        delete[] data;
        std::cout << "Memory freed \n";
    }
};

int main(){
  int n = 5;
  DynamicArray array(n);
  array.printArrSize();
  return 0;
}
