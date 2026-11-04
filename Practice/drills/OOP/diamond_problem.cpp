#include<iostream>

/* Base class */
class A
{
  protected:
    int ID;
  public:
    A() : ID(100){}
};

class B:  virtual public A
{
  public:
    int length;
};


/* Fix for the Diamond problem is to use virtual
 * With virtual inheritance, only one instance of the base class A is inherited into the derived class D.
 * */
class C:  virtual public A
{
  public:
    int radius;
};


class D: public B , public C
{
  public:
    int getID()  {   return ID;  }
};

int main(void)
{
    D d;
    std::cout << "Result is: "  << d.getID();
    return 0;
}
