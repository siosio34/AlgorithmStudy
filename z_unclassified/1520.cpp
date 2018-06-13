#include <iostream>
using namespace std;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0 , 1, -1};

int ans= 0;
int n, m;

int arr[501][501];
int dp[501][501];


int solve(int x, int y) {
	if(x == n-1 && y == m-1) {	
		return 1;
	}
	
	if(dp[x][y] > -1) {
		return dp[x][y];
	}
	
	dp[x][y] = 0;
	for(int i=0 ; i<4 ; i++) {
		int nextX = x+dx[i];
		int nextY = y+dy[i];
		if(nextX >= 0 && nextX < n && nextY >=0 && nextY < m) {
			if(arr[x][y] > arr[nextX][nextY]) {
				dp[x][y] += solve(nextX,nextY);
			}		
		}	
	}
	
	return dp[x][y];
	
}


int main() {
	cin >> n >> m;

	
	for(int i=0 ; i<n; i++) {
		for(int j=0; j < m ; j++) {
			cin >> arr[i][j];
			dp[i][j] = -1;
		}
	}
	
	solve(0,0);
	
	cout << dp[0][0] << endl;
	
}