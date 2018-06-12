#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000001];

int solve(int n) {
	if(n == 1) {
		return 0;
	}
	
	if(dp[n] > 0) {
		return dp[n];
	}
	
	dp[n] = solve(n-1) + 1;
	
	if(n % 3 == 0) {
		dp[n] = min(solve(n/3) + 1, dp[n]);
	}
	if(n % 2 == 0) {
		dp[n] = min(solve(n/2) + 1,dp[n]);
	}
	return dp[n];
	
}

int main() {
	int tmp;
	cin >> tmp;
	
	cout << solve(tmp) << endl;
	
}