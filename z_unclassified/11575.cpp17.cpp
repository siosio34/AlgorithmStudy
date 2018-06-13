#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int a,b;
		cin >> a >> b;
		
		string s;
		cin >> s;
		
		for(int i = 0 ; i < s.size() ; i++) {
			int tmp = ((a * (int)(s[i]- 'A') + b) % 26);
			cout << (char)(tmp + (int)'A');
		}
		cout << endl;
	}
}