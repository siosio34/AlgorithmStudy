#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b,oper;
	
	cin >> a >> oper >> b;
	
	if(oper == "+") {
		if(a.size() == b.size()) {
			a[0] = '2';
		} else if(a.size() > b.size()) {
			a[a.size()-b.size()] = '1';
		} else {
			b[b.size()-a.size()] = '1';
			a= b;
		}
		
		cout << a;
	} else {
		cout << "1";
		for(int i = 0 ; i < a.length() -1 + b.length()-1 ; i++) {
			cout <<"0";
		}
	}
	
}