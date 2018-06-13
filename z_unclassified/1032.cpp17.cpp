#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	
	string tmp;
	
	for(int i = 1 ; i < n ; i++) {
		cin >> tmp;
		
		for(int j = 0 ; j < tmp.size() ; j++) {
			if(s[j] != tmp[j]) {
				s[j] = '?';
			}
		}
	}
	cout << s << endl;
	
	return 0;
}