#include <iostream>

/* - In shallow copy, all variable values are copied, but dynamically allocated memory addresses are shared between objects.
   - Both objects point to the same heap memory, so changes made through one object affect the other.
   - This can lead to runtime errors like dangling pointers and double deletion, so it does not create an independent copy.
 */


class Sample{
  private:
    int *data;
  public:
    Sample(const int d){
      data = new int;
      *data = d;
    }
  int print(){
     return *data;
  }
  void setData(const int d){
    if (d > 0) *data = d;
  }
};

int main(){
 Sample s{100};
 Sample s1 = s; /* Shallow copy*/

 s.setData(10);

 /* Both objects will be the same 10 */
 std::cout << "Print object S  - " << s.print() << std::endl;
 std::cout << "Print object S1 - " << s1.print() << std::endl;
}
