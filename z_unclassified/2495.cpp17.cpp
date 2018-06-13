#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	string s;
	
	for(int k = 0 ; k < 3 ; k++) {
		int maxNum = 1;
		int cnt = 1;
		cin >> s;
		for(int i = 1 ; i <s.size() ; i++) {
			if(s[i] == s[i-1]) {
				cnt++;
				maxNum = max(maxNum,cnt);
			} else {
				maxNum = max(maxNum,cnt);
				cnt = 1;
			}
		}

		cout << maxNum << endl;
	}
}