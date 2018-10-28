#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	
	set<string> s;
	
	int n;
	cin >> n;
	
	string name, op;
	for(int i = 0 ; i < n ; i++) {
		cin >> name >> op;
	
		if(op == "enter") {
			s.insert(name);
		} else {
			s.erase(name);
		}
		
	}
	
	set<string>::reverse_iterator iter;
	for (auto it = s.rbegin(); it != s.rend(); it++) 
		cout << *it << '\n';
	
	
}