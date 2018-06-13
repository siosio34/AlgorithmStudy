// #include <iostream>
// using namespace std;

// int dp[41];

// int main() {
// 	int n,m;
// 	cin >> n >> m;
// 	int cnt = 1;
// 	dp[0] = 1;
// 	dp[1] = 1;
// 	dp[2] = 2;
// 	for(int i=3 ; i<=n ;i++) {
// 		dp[i] = dp[i-1] + dp[i-2];
// 	}
	
// 	int temp = 0;
// 	for(int i=0 ; i < m ; i++) {
// 		int k;
// 		cin >> k;
// 		cnt *= dp[k - temp - 1];
// 		temp = k;
// 	}
// 	cnt *= dp[n-temp];
// 	cout << cnt << endl;
// }