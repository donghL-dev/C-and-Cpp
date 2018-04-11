#include <iostream>
using namespace std;

class Point // 복소수클래스
{
public:// 생성자
Point(int realPart, int imaginaryPart)
: real(realPart), imaginary(imaginaryPart) {}
// 접근자들
int Real(int realPart) {real = realPart; return real;}
int Imaginary(int ImaginaryPart) {imaginary = ImaginaryPart; return real;}
int Real() const {return real;}
int Imaginary() const {return imaginary;}
private:
int real;// 실수부
int imaginary;// 허수부
Point operator+(const Point& right)
{
// 실수부와허수부를각각더한다.
int real = this->real + right.real;
int imag = this->imaginary + right.imaginary;
// 결과를보관한복소수객체를반환한다.
return Point(real, imag);
}
};

Point operator+(const Point& left, const Point& right)
{
// 실수부와허수부를각각더한다.
int real = left.Real() + right.Real();
int imag = left.Imaginary() + right.Imaginary();
// 결과를보관한복소수객체를반환한다.
return Point(real, imag);
}


int main() {
	Point p1(1, 1);
    Point p2(2, 2);
    Point p3(0, 0);
// + 연산자를사용한덧셈
p3 = p1 + p2;// c3 = (3, 3)
p3 = p1.operator+(p2);
cput << p3;
}








