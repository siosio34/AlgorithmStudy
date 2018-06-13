// #include <iostream>
// #include <algorithm>
// using namespace std;

// int num;
// int arr[100001];
// int dp[100001];

// int max_num = -1;



// int main() {
// 	cin >> num;
// 	for(int i= 1; i <=num ; i++) {
// 		cin >> arr[i];
// 	}
// 	dp[1] = arr[1];
	
// 	for(int i=2 ; i<=num ; i++) {
// 		dp[i] = max(dp[i-1]+arr[i], arr[i]);
// 		if(max_num < dp[i])
// 			max_num = dp[i];
// 	}
// 	cout << max_num << endl;
// }