#include <iostream>
using namespace std;

class Point // ���Ҽ�Ŭ����
{
public:// ������
Point(int realPart, int imaginaryPart)
: real(realPart), imaginary(imaginaryPart) {}
// �����ڵ�
int Real(int realPart) {real = realPart; return real;}
int Imaginary(int ImaginaryPart) {imaginary = ImaginaryPart; return real;}
int Real() const {return real;}
int Imaginary() const {return imaginary;}
private:
int real;// �Ǽ���
int imaginary;// �����
Point operator+(const Point& right)
{
// �Ǽ��ο�����θ��������Ѵ�.
int real = this->real + right.real;
int imag = this->imaginary + right.imaginary;
// ����������Ѻ��Ҽ���ü����ȯ�Ѵ�.
return Point(real, imag);
}
};

Point operator+(const Point& left, const Point& right)
{
// �Ǽ��ο�����θ��������Ѵ�.
int real = left.Real() + right.Real();
int imag = left.Imaginary() + right.Imaginary();
// ����������Ѻ��Ҽ���ü����ȯ�Ѵ�.
return Point(real, imag);
}


int main() {
	Point p1(1, 1);
    Point p2(2, 2);
    Point p3(0, 0);
// + �����ڸ�����ѵ���
p3 = p1 + p2;// c3 = (3, 3)
p3 = p1.operator+(p2);
cput << p3;
}








