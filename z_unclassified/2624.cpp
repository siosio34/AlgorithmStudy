#include <iostream>
using namespace std;

int money;
int num;
int cost[101];
int cnt[101];
int dp[10001][101];

int main() {
	cin >> money >> num;
	
	for(int i = 1 ; i <= num ;i ++) {
		cin >> cost[i] >> cnt[i];
	}
	
	
	for(int i = 1 ; i <= num ; i++) { 
		dp[0][i-1] = 1;
		for(int k = 1 ; k <= cnt[i] ; k++) {
			for(int j = cost[i] * k ; j <= money ; j++) {
				dp[j][i] += dp[j- cost[i] * k][i-1];
			}
		}
		for (int j = 1; j <= money; j++) {
            dp[j][i] += dp[j][i - 1];
        }
	}
	
	cout << dp[money][num];
	
}


