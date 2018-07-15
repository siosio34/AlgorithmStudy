#include <iostream>
#include <string>
using namespace std;

string solve(string tmp) {
	int cnt = 0;
	for(int i = 0 ; i < tmp.size() ; i++) {
			if(tmp[i] == '(') {
				cnt += 1;
			} else {
				cnt -= 1;
			}
			if(cnt < 0) {
				return "NO";
			}
		}
		if(cnt == 0) {
			return "YES";
		} else {
			return "NO";
		}
}

int main() {
	
	int t;
	cin >> t;
	
	while(t--) {
		string tmp;
		cin >> tmp;
		
		cout << solve(tmp) << endl;
	}
	return 0;
	
}