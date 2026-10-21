#include <iostream>
#include <string>

using namespace std;

const float PI = 3.142f;

class Ball{
  double radius;
  string color;

  public:
  Ball(){
    radius = 0;
    color = "";
  }

  Ball(double r, string c);

  void printVolume();
  void printRadius();

  // The friend keyword specifies that this is a friend function
  friend void setRadius(Ball &b, double r);

};

void Ball::printVolume(){
  cout << (4/3) * PI * radius * radius * radius << endl;
}

Ball::Ball(double r, string c) : radius{r}, color{c}{}

void Ball::printRadius(){
  cout << radius << endl;
}

// The implementation of our friend function
void setRadius(Ball &b, double r){
  b.radius = r;
}

 int main(){
   Ball b(30, "green");
   cout << "Initial radius: ";
   b.printRadius();

   setRadius(b, 60);
   cout << "New radius: ";
   b.printRadius();

   cout << "Volume: ";
   b.printVolume();
   return 0;
 }
