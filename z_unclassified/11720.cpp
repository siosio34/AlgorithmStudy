#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	int cnt = 0; 
	
	for(int i = 0 ; i < s.length() ; i++) {
		cnt += (int)s[i] - 48;
	}
	
	cout << cnt << endl;
}