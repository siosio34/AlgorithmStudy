#include <iostream>
using namespace std;

long long dp[31][31];

int main() {
	int t;
	cin >> t;
	
	int n,m;
	
	for(int i = 1;  i<= 30 ; i++) {
		dp[1][i] = i;
	}
	
	for(int i = 2 ; i<= 30 ; i++) {
			for(int j = 1 ; j <= 30 ; j++) {
				for(int k = i-1 ; k <= j-1 ; k++) {
					dp[i][j] += dp[i-1][k];
				}
			}
		}
	
	while(t--) {
		cin >> n >> m;
		cout << dp[n][m] << endl;
		
	}
	
	
}