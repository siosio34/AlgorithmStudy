#include <iostream>
using namespace std;

int dp[5001];
int main() {
    int n;
    cin >> n;
    dp[1] = 0;
    dp[2] = 0;
    dp[3] = 1;
    dp[4] = 0;
    dp[5] = 1;
	
	for(int i = 6 ; i <= n ;i ++) {
	if(dp[i-5] > 0) {
		dp[i] = dp[i-5] + 1;
		if(dp[i-3] > 0) {
			dp[i] = min(dp[i] ,dp[i-3] + 1);
		}
	}
	
	else if(dp[i-3] > 0) {
			dp[i] = dp[i-3] + 1;
		}
	}
	
	if(dp[n] == 0) dp[n] = -1;
	cout << dp[n] << endl;
    
}