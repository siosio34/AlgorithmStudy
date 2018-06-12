#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001][1001];
int dp[1001][1001];

int goX[3] = {0,1,1};
int goY[3] = {1,0,1};

int main() {
	int n,m;
	cin >> n >> m;
	
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= m ; j++) {
			cin >> arr[i][j];
		}
	}
	dp[1][1] = arr[1][1];
	
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= m ; j++) {
			for(int k = 0 ; k < 3 ; k++) {
				int nextX = i + goX[k];
				int nextY = j + goY[k];
				if(nextX <= n && nextY <= m) {
					dp[nextX][nextY] = max(dp[i][j] + arr[nextX][nextY], dp[nextX][nextY]);
				}
				
			}
		}
	}
	
	cout << dp[n][m] << endl;
	
	
	
}