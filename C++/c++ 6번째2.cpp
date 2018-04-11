#include <iostream>
using namespace std;

class Point // 복소수클래스
{
public : 	
	int x,y;
	Point(int xx, int yy) : x(xx), y(yy) {}
	Point operator+(Point p) {
		return Point(x+p.x, y+p.y);
	}
};
ostream& operator<<(ostream& o, Point p) {
	o << p.x <<' '<< p.y << endl;
	return o;
}
int main() {
	Point p1(1,1), p2(2,2), p3(0,0);
	p3 = p1 + p2;
	cout << p3;
}
