#include <iostream>
#include <algorithm>
using namespace std;

long long coin[101];
long long dp[100001];

int main() {
	int n,k;
	cin >> n >> k;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> coin[i];
		dp[coin[i]] = 1;
	}
	
	dp[0] = 1;

	for(int i = 0 ; i < n ; i++) {
		for(int j = coin[i] ; j <= k ;j++) {	
			if(j-coin[i] >= 0 && dp[j-coin[i]] != 0) {
				if(dp[j] > 0) {
					dp[j] = min(dp[j-coin[i]] + 1, dp[j]);
				} else {
					dp[j] = dp[j-coin[i]] + 1;
				}
			}
			
		}
	}
	
	if(dp[k] == 0) {
		cout << -1;
	} else {
		cout << dp[k];
	}
}