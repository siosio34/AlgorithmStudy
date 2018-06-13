#include <iostream>
#include <algorithm>
using namespace std;

int arr[501][501];
int dp[501][501];

int dx[4] = {0,0,1,-1};
int dy[4] = {1, -1, 0, 0};
int n;

int solve(int x, int y) {
	if(dp[x][y]  > 0) {
		return dp[x][y];
	}
	dp[x][y] = 1;
	
	
	for(int k = 0 ; k < 4 ; k++) {
		int nextX = x + dx[k];
		int nextY = y + dy[k];
		if(nextX >= 1 && nextX <= n && nextY >= 1 & nextY <= n && arr[x][y] > arr[nextX][nextY]) {
					dp[x][y] = max(dp[x][y], 1 + solve(nextX,nextY));
			}
		}
	
	
	return dp[x][y];
}

int main() {

	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		for(int j =1 ; j <= n ; j++) {
			cin >> arr[i][j];	
			dp[i][j] = 0;
		}
	}
	
	int nextX,nextY;
	int maxDay = 1;
	
	for(int i = 1 ; i <= n ; i++) {
		for(int j =1 ; j <= n ; j++) {
			maxDay = max(maxDay, solve(i,j));
		}
	}
	
	cout << maxDay;
}