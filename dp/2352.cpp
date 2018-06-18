#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int a[40001];
int dp[40001];
int main() {
	int n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		scanf("%d",&a[i]);
	}
	
	dp[1] = a[1];
	int size = 1;
	int tmp;
	for(int i = 2; i <= n ; i++) {
		if(dp[size] < a[i]) {
			dp[++size] = a[i];
			continue ;
 		}
		tmp = lower_bound(dp + 1, dp + 1 + size, a[i]) - dp;
		dp[tmp] = a[i];
	}
	
	cout << size << endl;
	
}
