#include <iostream>

const int SIZE = 100;

class stack {
  private:
    int count;
    int data[SIZE];

  public:
    void init(void);

    void push(const int n);

    int pop (void);

    int size (void);
};

inline void stack::init(void){
    count = 0;
}

inline void stack::push (const int n){
      data[count] = n;
      count++;
}

inline int stack::pop(void){
  if (count > 0){
    count--;
    return data[count];
  }
  return -1;
}

inline int stack::size(void){
  return count;
}

int main(){
  stack a_stack;
  a_stack.init();
  for(int i =0;i< 5;i++){
    a_stack.push(i);
  }
  std::cout << "Current stack has : " << a_stack.size() << " elements of " << SIZE << " avalable\n";

  std::cout << "result of pop: " << a_stack.pop() << std::endl;
}
