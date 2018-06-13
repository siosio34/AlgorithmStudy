#include <iostream>
#include <string>
#include<bits/stdc++.h>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	string a,b;
	cin >> a >>b;
	
	reverse(a.begin(),a.end()) ;
	reverse(b.begin(),b.end());
	
	string s = to_string(stoi(a) + stoi(b));
	reverse(s.begin(), s.end());

	bool flag = false;
	for(int i = 0 ; i < s.size() ; i++) {
		if(!flag) {
			if(s[i] != '0') {
				cout << s[i];
				flag = true;
			}
		} else {
			cout << s[i];
		}
	}
}