#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

int a[501];
int sum[501];
int dp[501][501];

int MAX_NUM = 987654321;

int solve(int start,int end) {
	if(start >= end)
		return 0;
	
	if(dp[start][end] > 0) {
		return dp[start][end];
	}
	
	dp[start][end] = 987654321;
	for(int i = start ; i < end; i++) {
		dp[start][end] = min(dp[start][end], solve(start,i) + solve(i+1,end) + sum[end] - sum[start-1]);
	}
	return dp[start][end];
	
}

int main() {
	int t;
	cin >> t;
	
	int n;
	while(t--) {
		cin >> n;
		memset(a,0,sizeof(a));
		for(int i = 1 ; i <= n ; i++) {
			scanf("%d",&a[i]);
			sum[i] = sum[i-1] + a[i];
			for(int j = 1 ; j <= n ; j++) {
				dp[i][j] = 0;
			}
		}
		
		cout << solve(1,n) << endl;
	}
}