#include <iostream>
using namespace std;

int dp[301][301];

int main() {
	int col, row;
	cin >> col >> row;
	
	dp[1][1] = 0;
	dp[1][2] = 1;
	dp[2][1] = 1;
	
	for(int i = 1 ; i <= col ;i++) {
		for(int j = 1 ; j <= row ; j++) {
			if(i < j) {
				dp[i][j] = dp[i][j-1] + i;
			} else if(i > j) {
				dp[i][j] = dp[i-1][j] + j;
			} else {
				dp[i][j] = i * j - 1;
			}
		}
	}
	cout << dp[col][row] << endl;
}