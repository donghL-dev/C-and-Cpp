#include <iostream>
using namespace std;
class Student
{
public:
	string name;
	int sNo;// 학번
Student(const string& name_arg, int stdNumber);
~Student();
public:
// 정적멤버들
static int student_count;
static void PrintStdCount();
};

int Student::student_count = 0;
// 정적멤버함수
void Student::PrintStdCount()
{
cout << "Student 객체수= " << student_count << "\n";
}
Student::Student(const string& name_arg, int stdNumber)
{
// 학생객체의수를증가시킨다.
student_count++;
name = name_arg;
sNo = stdNumber;
}
Student::~Student()
{
// 학생객체의수를감소시킨다.
student_count--;
}
void Func()
{
Student std1("Bill", 342);
Student std2("James", 214);
Student::PrintStdCount();
}

int main()
{
Student::PrintStdCount();
Student std("Jeffrey", 123);
Student::PrintStdCount();
Func();
Student::PrintStdCount();
return 0;
}
