#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	
	vector<int> a;
	
	for(int i = 0 ; i<s.length() ; i++) {
		int tmp = (int)(s[i]-'0');
		a.push_back(tmp);
	}
	
	sort(a.begin() , a.end());
	reverse(a.begin() , a.end());
	
	
	for(int i = 0 ; i<s.length() ; i++) {
		cout << a[i];
	}
	
}