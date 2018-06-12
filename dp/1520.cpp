#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;

int arr[501][501];
int dp[501][501];

int directX[4] = {0,1, -1, 0};
int directY[4] = {1,0,0, -1};

int n,m;
int nextX, nextY;

int solve(int i, int j) {
	if(i == n && j == m) {
		return 1;
	}
	
	int &ret = dp[i][j];
	if(ret >= 0) {
		return ret;
	}
	ret = 0;
	
	for(int k =0 ; k < 4 ; k++) {
		nextX = i + directX[k];
		nextY = j + directY[k];
		
		if(nextX >= 1 && nextX <= n && nextY >= 1 && nextY <= m && arr[nextX][nextY] < arr[i][j]) {
			
			ret += solve(nextX, nextY);
			
		}
	}
	
	return ret;
}

int main() {
	cin >> n >> m;
	
	memset(dp,-1,sizeof(dp));
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= m ; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	
	cout << solve(1,1) << endl;
}