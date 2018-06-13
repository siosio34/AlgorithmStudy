#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	for(int i = 0 ;i < s.size() ; i++) {
		if(s[i] >= 'A' && s[i] <= 'Z') {
			cout << (char)tolower(s[i]);
		} else {
			cout << (char)toupper(s[i]);
		}
	}
	
}