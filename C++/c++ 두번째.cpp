#include <iostream>
using namespace std;
// 생성자 호출이 관건 
class Point
{
public:
// 멤버함수
void Print() const;
// 생성자들
Point();
Point(int initialX, int initialY);
Point(const Point& pt);
// 접근자
void SetX(int value) { if (value < 0) x = 0; else if (value > 100) x = 100; else x = value; }
void SetY(int value) { if (value < 0) y = 0; else if (value > 100) y = 100; else y = value; }
int GetX() const {return x;}
int GetY() const {return y;}
private:
// 멤버변수
int x, y;
};

Point::Point()
{
x = 0;
y = 0;
}

Point::Point(int initialX, int initialY)
{
x = initialX;
y = initialY;
}

Point::Point(const Point& pt)
{
cout << "복사생성자호출됨!!\n";
x = pt.x;
y = pt.y;
}

class Rect
{
public:
Rect(); // 생성자
// 각점의값지정/얻기
void SetTopLeft(const Point& topLeft);
void SetBottomRight(const Point& bottomRight);
void SetRect(int left, int top, int right, int bottom);
Point GetTopLeft() const;
Point GetBottomRight() const;
void GetRect(int& left, int& top, int& right, int& bottom);
// 넓이, 높이계산
int GetWidth() const;
int GetHeight() const;
// 내용출력
void Print() const;
protected:
Point _topLeft;
Point _bottomRight;
};

Rect::Rect()
{
}
void Rect::SetTopLeft(const Point& topLeft)
{
_topLeft= topLeft;
}
void Rect::SetBottomRight(const Point& bottomRight)
{
_bottomRight= bottomRight;
}

void Rect::SetRect(int left, int top, int right, int bottom)
{
_topLeft.SetX(left);
_topLeft.SetY(top);
_bottomRight.SetX(right);
_bottomRight.SetY(bottom);
}
Point Rect::GetTopLeft() const
{
return _topLeft;
}

void Rect::GetRect(int& left, int& top, int& right, int& bottom)
{
left = _topLeft.GetX();
top = _topLeft.GetY();
right = _bottomRight.GetX();
bottom = _bottomRight.GetY();
}
int Rect::GetWidth() const
{return (_bottomRight.GetX() -_topLeft.GetX() + 1);
}
int Rect::GetHeight() const
{return (_bottomRight.GetY() -_topLeft.GetY() + 1);
}

void Rect::Print() const
{
   cout << "{L=" << _topLeft.GetX() << ", T=" << _topLeft.GetY();
   cout << ", R=" << _bottomRight.GetX() << ", B=" << _bottomRight.GetY() << "}\n";
}


int main()
{Rect rc1; // Rect 객체생성
rc1.Print();// 내용출력
rc1.SetRect( 10, 20, 30, 40); // 값을바꿔본다.
rc1.Print();// 내용출력
rc1.SetTopLeft( Point(20, 20));// 또값을바꿔본다.
rc1.Print();// 내용출력
// 넓이, 높이출력
cout << "rc1.GetWidth() = " << rc1.GetWidth() << "\n";
cout << "rc1.GetHeight() = " << rc1.GetHeight() << "\n";
return 0;
}

