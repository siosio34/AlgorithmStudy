#include <iostream>
using namespace std;

int dp[1000001];
int main() {
	int n;
	int DIV_NUM = 15746;
	
	cin >> n;
	dp[1] = 1;
	dp[2] = 2;
	
	for(int i = 3 ; i <= n ; i++) {
		dp[i] = dp[i-1] + dp[i-2];
	}
	cout << dp[n];
	
	
	
	
	
}