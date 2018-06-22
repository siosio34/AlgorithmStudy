#include <iostream>
#include <cstring>
using namespace std;

int a[101][101];
int dp[101][101];
 
int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		
		memset(a,0,sizeof(a));
		memset(dp,0,sizeof(dp));
		
		for(int i = 0 ; i < 101 ; i++) {
			for(int j = 0 ; j < 101 ; j++) {
				a[i][j] = 0;
				dp[i][j] = 0;
			}
		}
		
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < n ; j++) {
				cin >> a[i][j];
			}
		}
		
		dp[0][0] = a[0][0];
		
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < n ; j++) {
				if(dp[i][j] > 0) {
					int nextX = j + a[i][j];
					int nextY = i + a[i][j];
					if(nextX < n) {
						dp[i][nextX] = 1;
					}
					if(nextY < n) {
						dp[nextY][j] = 1;
					}
				}
			}
		}
		if(dp[n-1][n-1] == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}