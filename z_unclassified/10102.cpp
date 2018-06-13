#include <iostream>
#include <string>
using namespace std;

int a[2];
int main() {
	string s;
	int n;
	cin >> n;
	cin >> s;
	
	for(int i = 0 ; i < s.length() ; i++) {
		if(s[i] == 'A') {
			a[0]++;
		} else {
			a[1]++;
		}
	}
	
	if(a[0] > a[1]) {
		cout <<"A";
	} else if(a[0] < a[1]) {
		cout << "B";
	} else {
		cout <<"Tie";
	}
	
}