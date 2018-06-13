#include <iostream>
#include <algorithm>
using namespace std;

int sum[501];
int dp[501][501];

int a[501];

int MAX_NUM = 1000000000;

int solve(int start, int end) {
	
	if(start >= end) {
		return 0;
	}
	
	if(dp[start][end] > 0)
		return dp[start][end];

	dp[start][end] = MAX_NUM;
	for(int i = start ; i < end ; i++) {
		int temp = solve(start,i) + solve(i+1, end) + sum[end] - sum[start-1];
		
		dp[start][end] = min(dp[start][end],temp);
	}
	return dp[start][end];
}


int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int num;
		cin >> num;
		
		for(int i=1; i<= num ; i++) {
			cin >> a[i];
			sum[i] = sum[i-1] + a[i];
			for(int j =1 ; j<= num ;j++) {
				dp[i][j] = 0;
			}
		}
		

		// 탑다운
		cout << solve(1,  num) << endl;
		
		// 바텀 업
		// for(int i = 2 ; i<= num ; i++) {
		// 	for (int j = i; --j;) {
		// 		dp[j][i] = 2e9;
		// 		for(int k = j ; k <= i ; k++) {
		// 			dp[j][i] = min(dp[j][i], dp[j][k] + dp[k+1][i]);
		// 			cout << j << " " << i << " "<< k << endl;
		// 		}
		// 		dp[j][i] += sum[i] - sum[j-1];
		// 	}		
		// }
		
		
		// cout << dp[1][num] << endl;
		// 
		// 
		// 
		// 
		// for(int i = 2 ; i<= num ; i++) {
		// 	for (int j = i; --j;) {
		// 		dp[j][i] = 2e9;
		// 		for(int k = j ; k<= i ; k++) {
		// 			dp[j][i] = min(dp[j][i], dp[j][k] + dp[k+1][i]);
		// 		}
		// 		dp[j][i] += sum[i] - sum[j-1];
		// 	}
		// }
		// 
	}
}