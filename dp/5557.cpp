#include <iostream>
using namespace std;

int a[101];
long long dp[101][21];

int main() {
	int n;
	cin >> n;
	
	for(int i = 1 ; i < n ; i++) {
		cin >> a[i];
	}
	
	int ans;
	cin >> ans;
	
	dp[1][a[1]] = 1;
	for(int i = 2 ; i < n ; i++) {
		for(int j = 0 ; j <= 20 ;  j++) {
			if(dp[i-1][j] > 0) {
				if(j + a[i] <= 20) {
					dp[i][j+a[i]] += dp[i-1][j];
				}
				if(j - a[i] >= 0) {
					dp[i][j-a[i]] += dp[i-1][j];
				}
			}
		}
	}
	
	// for(int i = 0 ; i <= 20 ; i++) {
	// 	cout << 
	// }
	
	
	cout << dp[n-1][ans];
	
	
}