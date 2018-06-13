// #include <iostream>
// #include <algorithm>
// using namespace std;

// // int dp[100001][3];
// int dp[3][3];
// int a[100000][3];

// int main() {
// 	int num;
// 	cin>>num;
// 	for(int i=0; i < num ;i++) {
// 		for(int j=0 ; j< 3 ; j++) {
// 			cin >> a[i][j];
// 		}
// 	}
	
// 	int before_dp[3];
// 	int dp[3];
	
// 	before_dp[0] = dp[0] = a[0][0];
// 	before_dp[1] = dp[1] = a[0][1];
// 	before_dp[2] = dp[2] =a[0][2];
	

// 	for(int i=1 ; i<num ; i++) {
// 		dp[0] = max(before_dp[0],before_dp[1]) + a[i][0];
// 		dp[1] = max(max(before_dp[0],before_dp[1]),before_dp[2]) + a[i][1];
// 		dp[2] = max(before_dp[1],before_dp[2]) + a[i][2];
// 		before_dp[0] = dp[0];
// 		before_dp[1] = dp[1];
// 		before_dp[2] = dp[2];
// 	}
// 	cout << max(max(dp[0],dp[1]),dp[2]) << " ";
	
// 	before_dp[0] = dp[0] = a[0][0];
// 	before_dp[1] = dp[1] = a[0][1];
// 	before_dp[2] = dp[2] =a[0][2];
	
// 	for(int i=1 ; i<num ; i++) {
// 		dp[0] = min(before_dp[0],before_dp[1]) + a[i][0];
// 		dp[1] = min(min(before_dp[0],before_dp[1]),before_dp[2]) + a[i][1];
// 		dp[2] = min(before_dp[1],before_dp[2]) + a[i][2];
// 		before_dp[0] = dp[0];
// 		before_dp[1] = dp[1];
// 		before_dp[2] = dp[2];
// 	}
// 	cout << min(min(dp[0],dp[1]),dp[2]);
	
// 	// for(int i=1 ; i<num ; i++) {
// 	// 	dp[i][0] = min(dp[i-1][0],dp[i-1][1]) + a[i][0];
// 	// 	dp[i][1] = min(min(dp[i-1][0],dp[i-1][1]),dp[i-1][2]) + a[i][1];
// 	// 	dp[i][2] = min(dp[i-1][1],dp[i-1][2]) + a[i][2];
// 	// }
// 	// cout << min(min(dp[num-1][0],dp[num-1][1]),dp[num-1][2]) << endl;
// }