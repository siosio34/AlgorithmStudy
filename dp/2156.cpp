#include <iostream>
#include <algorithm>
using namespace std;

int dp[10001];
int wine[10001];

int main() {
	int n;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> wine[i];
	}
	
	dp[0] = wine[0];
	dp[1] = wine[0] + wine[1];
	dp[2] = max(max(dp[1] , wine[2] +wine[0]) ,wine[2] + wine[1]);
	
	for(int i = 3 ; i < n ; i++) {
		dp[i] = max(max(wine[i] + wine[i-1] + dp[i-3], wine[i] + dp[i-2]),dp[i-1]);
	}
	
	for(int i = 0 ; i < n ; i++) {
		cout << dp[i] << " " ; 
	}
	
	cout << dp[n-1] << endl;

}