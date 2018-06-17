#include <iostream>
using namespace std;

int dp[10001];
int coin[21];

int main() {
	int t;
	cin >> t;

	while(t--) {
		for(int i = 1 ; i <= 10000 ; i++) {
			dp[i] = 0;
		}
		for(int i = 1 ; i <= 20 ; i++) {
			coin[i] = 0;
		}
		int n;
		cin >> n;
		
		for(int i = 1 ; i <= n ; i++) {
			cin >> coin[i];
		}
		
		int sum;
		cin >> sum;
		
		dp[0] = 1;
		for(int i = 1 ; i <= n ; i++) {
			for(int j = coin[i] ; j <= sum ; j++) {
				dp[j] += dp[j-coin[i]];
			}
		}
		cout << dp[sum] << endl;
	}
}