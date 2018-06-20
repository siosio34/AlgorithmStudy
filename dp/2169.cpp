#include <iostream>
#include <algorithm>
using namespace std;

int n, m;

int dx[3] = {1 , -1 , 0};
int dy[3] = {0, 0 , 1};

int dp[1002][1002];
bool check[1002][1002];
int a[1002][1002];

int LEFT = 0;
int RIGHT = 1;
int DOWN = 2;
int MIN = -2e9;

int solve(int x, int y, int direction) {
	
	if(x == m && y == n) {
		return a[n][m];
	}
	
	int &ret = dp[x][y];
	if(ret != MIN) {
		return ret;
	}
	cout << x << " " << y << " " << direction << endl;

	if(check[x][y] == false) {
		check[x][y] = true;
		if(direction == LEFT) {
		if(x + 1 <= m )
			ret = max(ret, solve(x+1,y,RIGHT) + a[x][y]);
		if(y + 1 <= n)
			ret = max(ret, solve(x,y+1,DOWN) + a[x][y]);
	} else if(direction == RIGHT) {
		if(x - 1 >= 1) {
			ret = max(ret, solve(x-1,y,LEFT) + a[x][y]);
		}
		if(y + 1 <= n)
			ret = max(ret, solve(x,y+1,DOWN) + a[x][y]);
	} else if(direction == DOWN) {
		if(x + 1 <= m )
			ret = max(ret, solve(x+1,y,RIGHT)+ a[x][y]);
		if(x - 1 >= 1)
			ret = max(ret, solve(x-1,y,LEFT) + a[x][y]);
		if(y + 1 <= n)
			ret = max(ret, solve(x,y+1,DOWN)+ a[x][y]);
	}
		check[x][y] = false;
	}
	
	
	return ret;
}

// int dfs(int x,int y,int dir) {
// 		if(x == m && y == n ) {
// 			return arr[y][x];
// 		}
// 		if(dp[y][x][dir] != MIN) return dp[y][x][dir];
// 		for(int i=0;i<3;i++){
// 			int tx = x + dx[i];
// 			int ty = y + dy[i];
			
// 			if(tx > m || tx < 1 || ty > n || ty < 1 || check[ty][tx]) continue;
			
// 			check[ty][tx] = true;
// 			dp[y][x][dir]=max(dp[y][x][dir],dfs(tx,ty,i)+arr[y][x]);
// 			check[ty][tx] = false;
// 		}
// 		return dp[y][x][dir];		
// 	}
// 1 1 0
// 2 1 1
// 1 1 0
// 2 2 2
// 3 2 1
// 2 2 0
// 3 3 2
// 4 3 1
// 3 3 0
// 4 4 2
// 5 4 1
// 4 4 0
// 3 4 0
// 3 5 2
// 4 5 1
// 3 5 0
// 2 5 0
// 2 3 0
// 2 4 2
// 1 4 0
// 1 5 2
// 1 2 0
// 1 3 2

// 
int main() {

	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j <= m ; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 0 ; i <= 1000 ; i++) {
		for(int j = 0 ; j <= 1000 ; j++) {
			for(int k = 0 ; k < 3 ; k++) {
				dp[i][j] = MIN;
			}
		}
	}

	cout << solve(1,1,0);
}