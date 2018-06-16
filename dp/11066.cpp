#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

int a[501];
int dp[501];

int main() {
	int t;
	cin >> t;
	
	int n;
	while(t--) {
		cin >> n;
		memset(a,0,sizeof(a));
		memset(dp,987654321,sizeof(dp));
		for(int i = 1 ; i <= n ; i++) {
			scanf("%d",&a[i]);
		}
		
		dp[1] = a[1];
		dp[2] = a[1] + a[2];
		
		for(int i = 2 ; i<= num ; i++) {
			for (int j = i; --j;) {
				dp[j][i] = 2e9;
				for(int k = j ; k <= i ; k++) {
					dp[j][i] = min(dp[j][i], dp[j][k] + dp[k+1][i]);
				}
				dp[j][i] += sum[i] - sum[j-1];
			}		
		}
		
		for(int i = 3 ; i <= n ; i++) {
			dp[i] = min(2 * (dp[i-1] + a[i]), 2 * (a[i] + a[i-1] +  dp[i-2]));
		}
		cout<< dp[n] << endl;
	}
}