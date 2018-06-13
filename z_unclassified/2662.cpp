#include <iostream>
using namespace std;

int n,m;
int profit[301][21];
int dp[301][21];
int trace[301][21];

int solve(int money, int idx) {
	if(idx == m+1)
		return 0;
	
	if(dp[money][idx] > 0)
		return dp[money][idx];
	
	dp[money][idx] = 0;
	for(int i = 0; i <= money ; i++) {
		if(dp[money][idx] < profit[i][idx] + solve(money-i,idx+1)) {
			dp[money][idx] =  profit[i][idx] + solve(money-i,idx+1);
			trace[money][idx] = i;
		}
	}
	return dp[money][idx];
}

int main() {
	
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) {
		int a;
		cin >> a;
		for(int j =1 ; j <= m ; j++) {
			cin >> profit[a][j] ;
		}
	}
	
	cout << solve(n,1) << endl;
	
	for(int i = 1 ; i<= m ; i++) {
		cout << trace[n][i] << " ";
		n -= trace[n][i];
	}
	
	
}