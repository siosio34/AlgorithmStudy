#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
using namespace std;

int a[1001];
int dp[1001];

int main() {
	int n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
		dp[i] = 1002;
	}
	
	dp[1] = 0;
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= a[i] ; j++) {
			if(i + j > n) {
				break;
			} 			
			dp[i+j] = min(dp[i+j], dp[i] + 1);

		}
	}
	
	if(dp[n] == 1002) {
		cout << -1;
	} else {
		cout << dp[n];
	}
} 