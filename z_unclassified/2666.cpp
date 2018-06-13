#include <iostream>
#include <cmath>
using namespace std;

// 틀린이유 그리디하게 풀린다는 보장이없다.

int a[21];
int dp[21][21][21];
int use[21];
int ans = 0;

	int n;
	int first,second;
	int t;

int solve(int i,int j,int idx) {
	if(idx == t) {
		return 0;
	}
	
	if(dp[i][j][idx] != -1) {
		return dp[i][j][idx];
	}
	
	dp[i][j][idx] = min(solve(use[idx],j,idx+1) + abs(use[idx] -i), solve(i,use[idx],idx+1) + abs(use[idx]-j));
	
	return dp[i][j][idx];					
						
}
int main() {

	
	cin >> n;
	cin >> first >> second;
	cin >> t;
	
	for(int l =0 ; l < t ; l++) {
		cin >> use[l];
	}
	
	for(int i = 0 ; i < 21 ; i++) {
		for(int j = 0 ; j < 21 ; j++) {
			for(int k = 0 ; k < 21 ; k++) {
				dp[i][j][k] = -1;
			}
		}
	}
	
	// for(int i = 1 ; i <= n ; i++) {
	// 	for(int j = 1 ; j <= n ; j++) {
	// 		for(int k = 1 ; k <= n ; k++) {
	// 			if(abs(i-k) < abs(j-k)) {
	// 				dp[i][j][k] = abs(i-k);
	// 			} else {
	// 				dp[i][j][k] = abs(j-k);
	// 			}
	// 		}
	// 	}
	// }
	
	// for(int i =0 ; i < t ; i++) {
	// 	ans += dp[first][second][use[i]];
	// 	if(abs(first-use[i]) < abs(second-use[i]))
	// 		first = use[i];
	// 	else
	// 		second = use[i];
		
	// }
	cout << solve(first,second,0) << endl;
	
}