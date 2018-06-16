#include <iostream>
using namespace std;

int dp[201];
int a[201];

int main() {
	int n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		cin >> a[i];
	}
	
	int max = 1;
	for(int i = 1 ; i <= n ; i++) {
		dp[i] = 1;
		for(int j = 1 ; j < i ; j++) {
			if(a[i] > a[j] && dp[j] + 1 > dp[i]) {
				dp[i] = dp[j] + 1;
			}
		}
		if(max < dp[i])
			max = dp[i];
	}
	cout << n - max;
}