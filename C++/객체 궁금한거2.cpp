#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool Pred(int left, int right) {
	return abs(right-left) <= 3;
}
int main(void) {
	vector<int> v;
	vector<int> v1;
	
	v.push_back(10); v.push_back(20); v.push_back(32);
    v.push_back(33); v.push_back(35); v.push_back(55); 
	
	
	vector<int>::iterator iter;
	iter = search_n(v.begin(), v.end(),3, 30, Pred);
	cout << *iter << endl;
	
	  
	if(iter != v.end()) {
		cout << "iter :" << *iter << endl;
		cout << "iter-1 :" << *(iter-1) << endl;
		cout << "iter+1 :" << *(iter+1) << endl;
	}
	
	
	 
}
