#include <iostream>
#include <algorithm>
using namespace std;

long long dp[101][101];
long long arr[101][101];

int directionX[2] = {0,1};
int directionY[2] = {1,0};

int main() {
	int n;
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= n ; j++) {
			cin >> arr[i][j];
		}
	}
	
	dp[1][1] = 1;
	
	int nextX, nextY;
	for(int i = 1 ; i <= n ; i++) {
		for(int j =1 ; j <= n ; j++) {
			for(int k = 0 ; k < 2 ; k++) {
				if(i == n && j == n)
					break;
				nextX = i + directionX[k] * arr[i][j];
				nextY = j + directionY[k] * arr[i][j];
				dp[nextX][nextY] += dp[i][j];
			}
		}
	}
	
	cout << dp[n][n] << endl;
}