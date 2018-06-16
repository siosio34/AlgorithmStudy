#include <iostream>
#include <string>

using namespace std;

long long dp[5001];
int main() {
	string n;
	cin >> n;
 	
	if(n.size() ==1 && n[0] =='0') {
		cout << "0";
		return 0;
	}

	int tmp;
	tmp = 10 * int(n[0]-'0') + int(n[1]-'0');

	dp[0] = 1;
	if(tmp >= 1 && tmp <= 26) {
		if(tmp == 10 || tmp == 20) {
			dp[1] = 1;
		} else {
			dp[1] = 2;
		}
	} else {
		dp[1] = 1;
	}

	for(int i = 2; i < n.size() ; i++) {
		dp[i] += dp[i-1] % 1000000;
		tmp = 10 * int(n[i-1]-'0') + int(n[i]-'0');
		if(tmp >= 1 && tmp <= 26) {
			if(tmp == 10 || tmp == 20) {
				continue;
			} else {
				dp[i] += dp[i-2] % 1000000;
			}
			
		}
	}
	
	
	cout << dp[n.size()-1] % 1000000 ;
}