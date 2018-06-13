#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	string s;
	
	while(t--) {
		cin >> s;
		string s1;
		string s2;
		s1 = s.substr(0,3);
		s2 = s.substr(4,8);
		int s1toInt = 0;
		int s2toInt = 0;
		for(double i = 0 ; i < 3 ; i++) {
			s1toInt += pow(26,2 - i) * (int)(s[i]- 'A'); 
		}
		
		s2toInt = stoi(s2);
		
		if(abs(s1toInt - s2toInt) < 100) {
			cout << "nice" << endl;
		} else {
			cout << "not nice" << endl;
		}
		
		
		
		
	}
}