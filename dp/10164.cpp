#include <iostream>
using namespace std;

int dp[16][16];

int dx[2] = {0 , 1};
int dy[2] = {1 , 0};

int solve(int startX, int startY, int endX, int endY) {
	
	if(startX == endX && startY == startY) {
		return 1;
	}
	
	if(dp[startX][startY] > 0)
		return dp[startX][startY];

	for(int i = 0 ; i < 2 ; i++) {
		int nextX = startX + dx[i];
		int nextY = startY + dy[i];
		
		if(nextX >= 0 && nextX <= endX && nextY >=0 && nextY <= endY ) {
			dp[startX][startY] += solve(nextX,nextY,endX,endY);
		}
	}
	
	return dp[startX][startY];	
}

int main() {
	int n,m,k;
	cin >> n >> m >> k;
	
	int crossX,crossY;
	if( k == 0 ) {
		crossX = n;
		crossY = m;
	} else {
		crossX = (k-1) / m + 1;
		crossY = (k-1) % m + 1;
	}
	int pathBefore = solve(1,1,crossX,crossY);
	int pathAfter = solve(crossX,crossY,n,m);
	cout << pathBefore * pathAfter;
	return 0;
}