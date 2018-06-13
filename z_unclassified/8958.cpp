#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t;
	cin >> t; 
	string s;
	while(t--) {
		cin >> s;
		int cnt = 0 ;
		int tmp = 1 ;
		
		for(int i = 0 ; i < s.size() ; i++) {
			if(s[i] == 'O') {
				cnt += tmp;
				tmp++;
			} else {
				tmp = 1;
			}
		}
		cout << cnt << endl;
	}
}