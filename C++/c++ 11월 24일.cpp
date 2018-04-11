/*
#include <iostream>
#include <map>

using namespace std;
int main() {
	map<string, int> m;
	m.insert(pair<string, int>("one", 1));
	m.insert(pair<string, int>("two", 2));

	map<string, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
		cout << "(" << (*iter).first<<',' << (*iter).second << ")" << " ";
	cout << endl;
}*/
/*
#include <iostream>
#include <map>

using namespace std;
int main() {
	map<string, string> m;
	m.insert(pair<string, string>("DS", "data structure"));
	m.insert(pair<string, string>("AI", "artificial intelligoa"));
	m.insert(pair<string, string>("ML", "machine language"));

	map<string, string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter) {
		cout << "(" << (*iter).first<<',' << (*iter).second << ")" << " ";
		cout << endl;
	}
	
	cout << endl;
	
	string st;
	cin >> st;
	cout << m[st];
	
}*/

#include <iostream>
#include <map>

using namespace std;
int main() {
	
	map<string, string> m;
	m["DS"] = "data structure";
	m["AI"] = "artificial intelligoa";
	m["ML"] = "machine language";

	map<string, string>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter) {
		cout << "(" << (*iter).first<<',' << (*iter).second << ")" << " ";
		cout << endl;
	}
	
	cout << endl;
	
	string st;
	cin >> st;
	cout << m[st];
	
}
