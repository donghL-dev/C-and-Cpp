/*
#include <iostream>

// run this program using the console pauser or add your own getch, system("pause") or input loop 
using namespace std;

class Point {
   protected :
      int _x, _y;
   public :
      void Print () {
         cout << _x << ' ' << _y << endl ;
      }        
};

class Point3D : public Point {
   protected :
      int _c;
   public :   
      void Print() {
         cout << _x << ' ' << _y << ' ' << _c << endl;
   }
};
int main(int argc, char** argv) {
   Point p;
   p.Print();
   
   Point3D c;
   c.Print();
   
   return 0;
}
*/
/*
#include <iostream>
// run this program using the console pauser or add your own getch, system("pause") or input loop 
using namespace std;

class Point {
   protected :
      int _x, _y;
   public :
      Point() {
         _x = 0;
         _y = 0;
      }
      void Print () {
         cout << _x << ' ' << _y << endl ;
      }        
};

class Point3D : public Point {
   protected :
      int _c;
   public :
   Point3D () {
      _c = 0;
   }   
      void Print() {
         cout << _x << ' ' << _y << ' ' << _c << endl;
   }
};
int main(int argc, char** argv) {
   Point p;
   p.Print();
   
   Point3D c;
   c.Print();
   
   return 0;
}
*/

/*
#include <iostream>
using namespace std;

class Point {
   protected :
      int _x, _y;
   public :
      Point() {
         _x = 0;
         _y = 0;
      }
      Point(int x, int y) {
         _x = x;
         _y = y;
      }
      void Print () {
         cout << _x << ' ' << _y << endl ;
      }        
};

class Point3D : public Point {
   protected :
      int _c;
   public :
   Point3D () {
      _c = 0;
   }
   Point3D (int x, int y, int c) : Point(x,y)  { // 초기화리스트 
      _c = c;
   }   
      void Print() {
         cout << _x << ' ' << _y << ' ' << _c << endl;
   }
};
int main(int argc, char** argv) {
   Point p;
   p.Print();
   
   Point3D c(10,20, 30);
   c.Print();
   
   return 0;
} 
*/

#include <iostream>
using namespace std;

class Point {
   protected :
      int _x, _y;
   public :
      Point() {
         _x = 0;
         _y = 0;
      }
      Point(int x, int y) {
         _x = x;
         _y = y;
      }
      void Print () {
         cout << _x << ' ' << _y << endl ;
      }
      void length();
      void move(int x, int y);        
};
void Point::length()
{
   cout << _x*_x + _y*_y << endl ;
}
void Point::move(int x, int y)
{
   _x += x;
   _y += y;
}
   
class Point3D : public Point {
   protected :
      int _c;
   public :
   Point3D () {
      _c = 0;
   }
   Point3D (int x, int y, int c) : Point(x,y)  { // 초기화리스트 
      _c = c;
   }   
      void Print() {
         cout << _x << ' ' << _y << ' ' << _c << endl;
   }
   void length();
   void move(int x, int y, int c);
};
void Point3D::length()
{
   cout << _x*_x + _y*_y + _c*_c << endl;
}
void Point3D::move(int x, int y, int c)
{
   _x += x;
   _y += y;
   _c += c;
}
int main(int argc, char** argv) {
   
   Point3D c(10,20,30);
   c.Print();
   c.length();
   
   c.move(10 , 0, -10);
   c.Print();
   c.length();
}


