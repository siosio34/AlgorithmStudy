// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int dp[1001][1001];

// int main() {
// 	string str1, str2;
// 	cin >> str1 >> str2;
	
// 	int t1_size = str1.size();
// 	int t2_size = str2.size();
	
// 	int max_num = 1;

// 	for(int i = 1 ; i <= t1_size;  i++) {
// 		for(int j = 1 ; j <= t2_size ; j++) {
// 			if(str1[i-1] == str2[j-1]) {
// 				dp[i][j] = dp[i-1][j-1]+1;
// 			}
			
// 			else {
// 				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
// 			}
			
			
// 			if(max_num < dp[i][j])
// 				max_num = dp[i][j];
// 		}
// 	}
// 	cout << max_num << endl;
// }