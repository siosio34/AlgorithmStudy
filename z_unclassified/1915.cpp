#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int dp[1001][1001];
int a[1001][1001];

int main() {
	int n,m;
	cin >> n >> m;
	
	dp[0][0] = 0;
	dp[1][0] = 0;
	dp[0][1] = 0;
	int max_num = 0;
	
	int num;
	
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= m ; j++) {
			scanf("%1d", &num);
			if(num == 1) {
				dp[i][j] = min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]) + 1;
			if(max_num < dp[i][j])
				max_num = dp[i][j];
			}
		}
	}
	
	cout << max_num * max_num << endl;
	
}