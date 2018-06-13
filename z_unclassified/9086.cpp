#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	string s;
	while(t--) {
		cin >> s;
		
		cout << s[0] << s[s.size()-1] << endl;;
	}
}