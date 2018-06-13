#include <iostream>
using namespace std;

int n;
long long int dp[101][101];
long long int a[101][101];

long long int solve(long long int x,long long int y) {
	if(x == n && y == n)
		return 1;

	if(dp[x][y] > -1) {
		return dp[x][y];
	}
	
	dp[x][y] = 0;
	
	long long int nextX = x + a[x][y];
	long long int nextY = y + a[x][y];
	
	if(nextX >= 1 && nextX <= n)
		dp[x][y] += solve(nextX,y);
	if(nextY >= 1 && nextY <= n)
		dp[x][y] += solve(x,nextY);
	
	return dp[x][y];
}

int main() {
	cin >> n;
	for(int i = 1 ; i <= n; i++) {
		for(int j = 1 ; j<= n ; j++) {
			cin >> a[i][j];
			dp[i][j] = -1;
		}	
	}
	// 오른쪽이랑 아래로밖에 못간대!
	solve(1,1);
	cout << dp[1][1] << endl;

}