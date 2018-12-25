#include <iostream>
#include <algorithm>
using namespace std;

int dx[4] = {0, 0 ,1, -1};
int dy[4] = {1, -1, 0, 0};
int map[501][501];
int visited[501][501];

int ans = 0;
int n,m;

void dfs(int x, int y, int cnt, int sum) {
	
	if (cnt == 4) {
		ans = max(ans, sum);
		return;
	}
	
	visited[x][y] = true;
	
	for(int i = 0 ; i < 4 ; i++) {
		int nextX = x + dx[i];
		int nextY = y + dy[i];
		
		if(nextX >= 0 && nextX < n && nextY >=0 && nextY < m) {
			if(!visited[nextX][nextY]) {
				dfs(nextX, nextY, cnt+1, sum + map[x][y]);
			}
		}
		
		
	}
	
	visited[x][y] = false;
}

void checkNotDfsFigure(int x, int y) { // 'ㅜ'
	
	int cnt = 0;
	int sum = map[x][y];
	int minValue = 1001;
	
	for(int i = 0 ; i < 4 ; i++) {
		int nextX = x + dx[i];
		int nextY = y + dy[i];
		
		if(nextX >= 0 && nextX < n && nextY >=0 && nextY < m) {
			cnt++;
			sum += map[nextX][nextY];
			
			if(map[nextX][nextY] < minValue) {
				minValue = map[nextX][nextY];
			}
				
		
	}
	
	}
	
	if(cnt == 4) {
		sum -= minValue;
	}
	
	ans = max(ans, sum);
	
}

int main() {

	
	cin >> n >> m;
	
	for(int i = 0 ; i < n; i++) {
		for(int j = 0 ; j < m ; j++) {
			cin >> map[i][j];
		}
	}
	
	for(int i = 0 ; i < n; i++) {
		for(int j = 0 ; j < m ; j++) {
			dfs(i,j,0,0);
			checkNotDfsFigure(i,j);
		}
	}
	
	cout << ans;
	
	
	
}