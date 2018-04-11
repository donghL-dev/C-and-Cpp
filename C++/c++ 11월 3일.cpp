/*
#include <iostream>
using namespace std;
class Cmp {
	public:
		bool operator() (int n, int m) {
			return n > m;
		}
};
int main() {
	Cmp cp;
	cout << cp(4,5) << endl;
	cout << cp(8,4) << endl; 
	
}
*/

#include <iostream>
using namespace std;
class Cmp {
	public:
		bool operator() (string name, int n, int m) {
			cout << "name:" << name << endl;
			cout << "age: " << n << endl;
			cout << "grade : " << m << endl;
		}
};
int main() {
	Cmp cp;
	cp("ancellmo", 22, 2);

}
