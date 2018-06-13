#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	cin.ignore();
	for(int i = 0 ; i < n ; i++) {
	
		getline(cin,s);
		cout << (char)toupper(s[0]);
		for(int j= 1 ; j< s.size() ;j++) {
			cout << s[j];
		}
		cout << endl;

	}
}