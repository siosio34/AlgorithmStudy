#include <iostream>
using namespace std;

int fixX, fixY;
int sum1, sum2;
int dp[16][16];

int dx[2] = {0,1};
int dy[2] = {1,0};

int solve(int startX,int startY,int finishX,int finishY) {
	if(startX == finishX && startY == finishY) {
		return 1;
	}
	
	if(dp[startX][startY] > 0)
		return dp[startX][startY];

	for(int i = 0 ; i < 2 ; i++) {
		int nextX = startX + dx[i];
		int nextY = startY + dy[i];
		
		if(nextX >= 0 && nextX <= finishX && nextY >=0 && nextY <= finishY ) {
			dp[startX][startY] += solve(nextX,nextY,finishX,finishY);
		}
	}
	return dp[startX][startY];

}

int main() {
	int n,m,k;
	cin >> n >> m >> k;
	
	if( k == 0 ) {
		fixX = n-1;
		fixY = m-1;
	} else {
		fixX = (k-1) / m;
		fixY = (k-1) % m;
	}
	int sum1 = solve(0,0,fixX,fixY);
	int sum2 = solve(fixX,fixY,n-1,m-1);
	
	cout << sum1 * sum2;
	
}