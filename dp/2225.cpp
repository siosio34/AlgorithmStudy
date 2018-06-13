#include <iostream>
using namespace std;

long long DIV_NUM = 1000000000;
long long dp[201][201];
// 앞에것 1,2,3 숫자
// 사용하는 동전갯수.
int main() {
	int n,k;
	cin >> n >> k;
	
	for(int i = 0 ; i <= k ; i++) {
		dp[0][i] = 1;
	}

	
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= k ; j++) {
			for(int l = 0 ; l <= i ; l++) {
				dp[i][j] += dp[l][j-1] % DIV_NUM;
			}
			
		}
	}

	cout << dp[n][k] % DIV_NUM ;
	
	
}

		// cout << i << " " << j << " " << l << " " << dp[i][j] <<  endl;