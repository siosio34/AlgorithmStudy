#include <iostream>
using namespace std;

long long dp[1001][10];

int main() {

	for(int i = 0 ; i <= 9 ; i++) {
		dp[1][i] = 1;
	}

	int n;
	cin >> n;
	
	for(int i = 2 ; i <= n ; i++) {
		for(int j = 0 ; j <= 9 ; j++) {
			for(int k = 0 ; k <= j ; k++) {
				dp[i][j] += dp[i-1][k] % 10007 ;
			}
		}
	}
	
	long long sum = 0;
	for(int i = 0 ; i<= 9 ; i++) {
		sum += dp[n][i] % 10007;
	}
	cout << sum % 10007;
}