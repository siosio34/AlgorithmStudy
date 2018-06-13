#include <iostream>
using namespace std;

int dp[1001][1001];

int main() {
	int n, k;
	cin >> n >> k;

	for(int i = 1 ; i <= n ; i++) {
		for(int j= 0 ; j <= i ; j++) {
			if(i == j || j == 0) {
				dp[i][j] = 1;
			} else {
				dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 10007;
			}
		}
	
	}
	cout << dp[n][k];
	
}