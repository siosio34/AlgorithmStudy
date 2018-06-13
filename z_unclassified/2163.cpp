// #include <iostream>
// #include <algorithm>
// using namespace std;

// int dp[301][301];

// int main() {
// 	int n,m;
// 	cin >> n>> m;
	
// 	for(int i=1 ; i<=n ; i++) {
// 		dp[i][1] = i-1;
// 	}	
// 	for(int i=1 ; i<=m ; i++) {
// 		dp[1][i] = i-1;
// 	}
	
// 	dp[0][0] = 0;
	
// 	for(int i = 1 ; i <=n ; i++) {
// 		for(int j = 1 ; j <= m ;j++) {
// 			if(i != 1 && j!= 1) {
// 				dp[i][j] = min(dp[i-1][j] +j, dp[i][j-1] + i);
// 			}
		
// 		}
// 	}
// 	cout << dp[n][m] << endl;
	
	
// }