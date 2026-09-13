#include<iostream>
#include<cstdlib>

struct Point{
  int x;
  int y;
};

int main(){
  Point p1;
  p1.x = 3;
  p1.y = 4;
  std::cout << "Point with (" << p1.x << "," << p1.y <<") coordinates" << '\n';

  Point *p2 = &p1;
  p2->x = 5;
  p2->y = 10;
  std::cout << "Point with (" << (*p2).x << "," << p2->y <<") coordinates" << '\n';
  std::cout << "Size of Point: "<<sizeof(Point) << '\n';

  /* C way of doing it with malloc */
  Point *p3 = static_cast<Point*>(malloc(sizeof(Point)));
  p3->x = 10;
  p3->y = 20;
  std::cout << "Point with (" << p3->x << "," << p3->y <<") coordinates" << '\n';
  delete p3;

  /* C++ way of doing it */
  Point *p4 = new Point;
  p3->x = 30;
  p3->y = 50;
  std::cout << "Point with (" << p4->x << "," << p4->y <<") coordinates" << '\n';
  delete p4;
}
