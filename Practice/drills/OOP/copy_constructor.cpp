#include <iostream>

class Shallow {
  private:
    int *data;

  public:
    Shallow(int d){
      data = new int;
      *data = d;
    }

    Shallow(const Shallow &source): data(source.data){};

    ~Shallow(){
      delete data;
      std::cout << "Destructor called !" << std::endl;
    }

    int getValue(){
      std::cout << *data << std::endl;
      return *data;
    }

    int setValue(int value){
      *data = value;
      return *data;
    }
};


void runShallowCopy(){
  Shallow obj1(100);
  obj1.getValue();
  obj1.setValue(1000);

  Shallow obj2(obj1);
  obj2.getValue();
  int result = obj2.setValue(1000);
  std::cout << result << std::endl;

  /* This code will crash */
  /* Shallow copy duplicates only the pointer. Both objects own the same int, so their destructors double-free it (UB - Undefined Behavior).
   * It may crash at destruction or corrupt the heap silently.*/
}

class Deep {
  /* Deep copy, not copying pointer address but will create
   * separate memory address for every copy-constructed object
   *
   * */
  private:
    int *data;

  public:
    Deep(int d){
      data = new int;
      *data = d;
    }

    Deep(const Deep &source): Deep(*source.data){};

    Deep& operator=(const Deep&) = delete;

    ~Deep(){
      delete data;
      std::cout << "Destructor called !" << std::endl;
    }

    int getValue(){
      std::cout << *data << std::endl;
      return *data;
    }

    int setValue(int value){
      *data = value;
      return *data;
    }
};

void runDeepCopy(){
  Deep obj1(100);
  obj1.getValue();
  obj1.setValue(1000);

  Deep obj2(obj1);
  obj2.getValue();
  int result = obj2.setValue(1000);
  std::cout << result << std::endl;

  /* compiler will error */
  // obj2 = obj1;
}
int main(){
  // runShallowCopy();
  runDeepCopy();
}
