#include <iostream>
#include <string>
using namespace std;

int main() {
	string cStr = "CAMBRIDGE";
	string s;
	
	cin >> s;
	
	for(int i = 0 ; i < s.size() ; i++) {
		bool check = false;
		for(int j= 0 ; j <cStr.size() ; j++) {
			if(s[i] == cStr[j]) {
				check = true;
			}
		}
		if(!check) cout << s[i];
	}
	
}