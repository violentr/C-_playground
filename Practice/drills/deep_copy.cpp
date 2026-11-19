#include <iostream>
/* - In deep copy, a new object is created by copying all variable values and allocating separate memory for dynamically allocated variables.
   - Both the original and copied objects store their data in different memory locations.
   - Changes made to one object do not affect the other because a custom copy constructor is used.
*/
class Sample{
  private:
    int *data;
  public:
    Sample(int d){
      data = new int;
      *data = d;
    }
    Sample(const Sample &s){
      data = new int;
      *data = *(s.data);
      std::cout << "Constructor with ref" << std::endl;
    }
    ~Sample(){
      std::cout << "Destructor called!" << std::endl;
    }
  int print(){
     return *data;
  }
  void setData(int d){
    if (d > 0) *data = d;
  }
};

int main(){
 Sample s{100};
 std::cout << "Reference" << std::endl;
 Sample s1 = s; /* Deep copy*/

 s.setData(10);

 /* objects will be different */
 std::cout << "Print object S  - " << s.print() << std::endl;
 std::cout << "Print object S1 - " << s1.print() << std::endl;
}
