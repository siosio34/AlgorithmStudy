#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	
	stack<int> a;
	
	int t;
	string s;
	cin >> t;
	while(t--) {
		cin >> s;
		
		if(s == "push") {
			int tmp;
			cin >> tmp;
			a.push(tmp);
		} else if(s == "top") {
			cout << (a.empty() ? -1 : a.top()) << endl;
		} else if(s == "size") {
			cout << a.size() << endl;
		} else if(s=="empty") {
			cout << (a.empty() ? 1 : 0) << endl;
		} else if(s== "pop"){
			if(a.empty()) {
				cout << -1 << endl;
			} else {
				cout << a.top() << endl;
				a.pop();
			}
		}
		
	
	}
	
}