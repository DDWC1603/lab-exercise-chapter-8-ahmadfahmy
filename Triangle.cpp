#include <iostream>
#include <string>
using namespace std;

class CTriangle
{
     int x,y;

   public:
     void set_value(int,int);
     int area () {return (x*y/2);}

};

void CTriangle::set_value (int a,int b) {
  x = a;
  y = b;
}

int main()
{
  CTriangle tri;
  tri.set_value (5,3);
  cout << "area: " << tri.area();

  return 0;
}
