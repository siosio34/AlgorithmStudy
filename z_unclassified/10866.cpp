#include <iostream>
#include <deque>
#include <string>
using namespace std;

deque<int> a;

int main() {
	int n;
	cin >> n;

	string s;
	int tmp;
	
	while(n--) {
		cin >> s;
		
		if(s == "push_front") {
			cin >> tmp;
			a.push_front(tmp);
		} else if(s == "push_back") {
			cin >> tmp;
			a.push_back(tmp);
		} else if(s == "pop_front") {
			if(a.size() == 0) {
				cout << -1 << endl;
			} else {
				cout << a.front() << endl;
				a.pop_front();
			}
		}else if(s == "pop_back") {
			if(a.size() == 0) {
				cout << -1 << endl;
			} else {
				cout << a.back() << endl;
				a.pop_back();
			}
		}else if(s == "size") {
			cout << a.size() << endl;
		}else if(s == "empty") {
			cout << ( a.size() == 0 ? 1 : 0) << endl;
		}else if(s == "front") {
			if(a.size() == 0) {
				cout << -1 << endl;
			} else {
				cout << a.front() << endl;
			}
		}else if(s == "back") {
			if(a.size() == 0) {
				cout << -1 << endl;
			} else {
				cout << a.back() << endl;
			}
		}
		
	}
}