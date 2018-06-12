#include <iostream>
#include <algorithm>
using namespace std;

int stairs[301];
int dp[301];

int main() {
	int n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		cin >> stairs[i];
	}
	
	dp[1] = stairs[1];
	dp[2] = stairs[1] + stairs[2];
	// 35 25 
	// 50 55
	
	for(int i = 3; i <= n ; i++) {
		dp[i] =  max(stairs[i] + stairs[i-1] + dp[i-3] , dp[i-2] + stairs[i]);
		cout << "%%" << dp[i] << endl;
	}
	
	cout << dp[n];
	
}