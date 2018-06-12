#include <iostream>
using namespace std;

int dp[101];

int main() {
	int t;
	cin >> t;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;
	
	for(int i = 5 ; i <= 100 ; i++) {
		dp[i] = dp[i-3] + dp[i-4] + dp[i-5];
	}
	
	while(t--) {
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
}