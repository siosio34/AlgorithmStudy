#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int ans = 0;
int n, k;
int vec[101];
int dp[10001] = { 0 };
queue<int> q;

int main() {

	cin >> n >> k;
	
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	dp[0] = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= k; j++)
		 {
			if (j-vec[i] >= 0) {
				dp[j] += dp[j - vec[i]];
			}
		}
	}
	cout << dp[k];

	return 0;
}