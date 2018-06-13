#include <iostream>
using namespace std;

long long dp[101][101][101];

int main() {
	int num ,left,right;
	cin >> num >> left >> right;
	
	dp[1][1][1] = 1;
	
	for(int i = 2 ; i <= num ; i++) {
		for(int j = 1 ; j <= num ; j++) {
			for(int k =1 ; k <= num ; k++) {
				dp[i][j][k] = (dp[i-1][j-1][k] % 1000000007
					+ dp[i-1][j][k-1] % 1000000007
					+ (i-2) * dp[i-1][j][k] % 1000000007) % 1000000007;
					
			}
		}
	}
	
	cout << dp[num][left][right] % 1000000007 << endl;
}