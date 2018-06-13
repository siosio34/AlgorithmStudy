// #include <iostream>
// using namespace std;

// int dp[100002][3];

// int main() {
// 	int num;
// 	cin >> num;
// 	// dp[n][0] = dp[n - 1][0] + dp[n - 1][1] + dp[n - 1][2]
// 	// dp[n][1] = dp[n - 1][0] + dp[n - 1][2]
// 	// dp[n][2] = dp[n - 1][0] + dp[n - 1][1]
	
// 	dp[1][0] = 1;
// 	dp[1][1] = 1;
// 	dp[1][2] = 1;

// 	for(int n = 2 ; n <= num+1 ; n++) {
// 		dp[n][0] = (dp[n - 1][0] + dp[n - 1][1] + dp[n - 1][2])% 9901;
// 		dp[n][1] = (dp[n - 1][0] + dp[n - 1][2]) % 9901;
// 		dp[n][2] = (dp[n - 1][0] + dp[n - 1][1])% 9901 ;
// 	}
// 	cout << dp[num+1][0] << endl;
// 	// dp[n] = 2 * dp[n-1] + 
// }