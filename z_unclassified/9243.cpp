#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	string s1;
	string s2;
	
	cin >> n >> s1 >> s2;
	
	if(n % 2 != 0) {
		for(int i = 0 ; i < s1.length() ; i++) {
			if(s1[i] == '0') {
				s1[i] = '1';
			} else {
				s1[i] = '0';
			}
		}
	}
	
	

	if(s1 == s2) {
		cout << "Deletion succeeded";
	} else {
		cout << "Deletion failed";
	}
}