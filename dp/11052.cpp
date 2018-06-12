#include <iostream>
#include <algorithm>
using namespace std;

int cost[1001];
int dp[1001];

int main() {
	int n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		cin >> cost[i];
	}
	
	dp[0] = 0;
	dp[1] = cost[1];
	
	for(int i = 2 ; i <= n ; i++) {
		for(int j = 1 ; j < i ; j++) {
			dp[i] = max(max(cost[i], dp[i - j] + cost[j]),dp[i]);
		}
	}
	
	cout << dp[n] << endl;
	
	
}