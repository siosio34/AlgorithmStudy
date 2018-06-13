// #include <iostream>
// using namespace std;

// int max_days =1;
// int n;
// int dp[501][501];
// int a[501][501];

// int dx[4] = {-1,1,0,0};
// int dy[4] = {0,0,1,-1};

// int go(int x,int y) {
	
// 	if(dp[x][y] > 1)
// 		return dp[x][y];
	
// 	for(int i = 0 ; i < 4; i++) {
// 		int nextX = x + dx[i];
// 		int nextY = y + dy[i];
// 		int temp = 0;
// 		if(nextX >= 0 && nextX < n && nextY >= 0 && nextY < n) {
// 			if(a[x][y] > a[nextX][nextY]) {
// 				temp = go(nextX, nextY) + 1;
				
// 				if(temp > dp[x][y])
// 					dp[x][y] = temp;
				
// 				if(dp[x][y] > max_days)
// 					max_days = dp[x][y];
				
// 			}
// 		}
// 	}
// 	return dp[x][y];
	
// }

// int main() {
// 	cin >> n;
// 	for(int i = 0 ; i< n ; i++) {
// 		for(int j = 0 ; j< n ;j++) {
// 			cin >> a[i][j];
// 			dp[i][j] = 1;
// 		}
// 	}
	
// 	for(int i = 0 ; i < n ; i++) {
// 		for(int j = 0 ; j < n ; j++) {
// 			go(i,j);
// 		}
// 	}
// 	cout << max_days << endl;
// }