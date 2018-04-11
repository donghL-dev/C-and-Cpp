#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class Cmp {
	public:
		bool operator() (string name, int n, int m) {
			cout << "name:" << name << endl;
			cout << "age: " << n << endl;
			cout << "grade : " << m << endl;
		}
};
int main(int argc, char** argv) {
	Cmp cp;
	cp("ancellmo", 22, 2);
	return 0;
}
