#include <iostream>
#include <cstdio>
int arr[2001];
int dp[2001][2001];
using namespace std;

int main() {
	int  n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		cin >> arr[i];
		dp[i][i] = 1;
	}
	
	for(int i = 1 ; i < n ; i++) {
		if(arr[i] == arr[i+1]) {
			dp[i][i+1] = 1;
		}
	}
	
	for(int i = 3 ; i <= n ; i++) {
		for(int j = 1 ; j < n ; j++) {
			int end = i + j - 1;
			if(arr[j] == arr[end] && dp[j+1][end-1] == 1) {
				dp[j][end] = 1;
			}
		}
	}
	
	int t;
	cin >> t;

	int a,b;
	while(t--) {
		scanf("%d %d", &a, &b);
		printf("%d\n",dp[a][b]);
	}
	
}