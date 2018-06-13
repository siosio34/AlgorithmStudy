#include <iostream>
#include <algorithm>
using namespace std;

int dp[2001][2001];
int a[2001];
int b[2001];
int num;

int solve(int i, int j) {

	if(i > num || j > num)
		return 0;

	if(dp[i][j] != -1)
		return dp[i][j];
	
	if(a[i] > b[j]) {
		dp[i][j] = solve(i,j+1) + b[j];
	}
		
	else
		dp[i][j] = max(solve(i+1,j), solve(i+1,j+1));
	
	return dp[i][j];
}

int main() {
	cin >> num;
	
	for(int i = 1 ; i <= num ; i++) {
		cin >> a[i] ;
	}
	
	for(int i = 1 ; i <= num ; i++) {
		cin >> b[i];
	}
	
	for(int i = 1 ; i <= num ; i++) {
		for(int j = 1 ; j <= num ; j++) {
			dp[i][j] = -1;
		}
	}

	cout << solve(1,1);
// 
}