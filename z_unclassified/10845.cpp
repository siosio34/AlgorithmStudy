#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	string s;
	queue<int> a;
	
	while(cin >> s) {
		if(s=="push") {
			int tmp;
			cin >> tmp;
			a.push(tmp);
		} else if(s =="front") {
			cout << (a.size() == 0 ? -1 : a.front()) << endl;
		} else if(s == "back") {
			cout << (a.size() == 0 ? -1 : a.back()) << endl;
		} else if(s == "pop") {
			if(a.size() > 0) {
				cout << a.front() << endl;
				a.pop();
			} else {
				cout << -1 << endl;
			}
		} else if(s == "size") {
			cout << a.size() << endl;
		} else if(s == "empty") {
			cout << (a.size() == 0 ? 1 : 0) << endl;
		}
	}
	
}