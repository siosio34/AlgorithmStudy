#include <iostream>
using namespace std;

int n, k;
int vec[10001];
int dp[10001];
int ans = 0;

int main() {

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	for (int i = 0; i <= k; i++) {
		dp[i] = -1;
	}

	dp[0] = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= k; j++) {
			if (j - vec[i] >= 0 && dp[j - vec[i]] != -1) {
				if (dp[j] == -1 || dp[j] > dp[j - vec[i]] + 1) {
					dp[j] = dp[j - vec[i]] + 1;
				}
			
			}
		}
	}
	cout << dp[k];

}