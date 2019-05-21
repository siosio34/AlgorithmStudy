#include <iostream>
#include <algorithm>
using namespace std;

int n,m;

int map[501][501];
int check[501][501];

int dx[4] = {0, 0 ,1, -1};
int dy[4] = {1, -1, 0, 0};

int ans;

// 세로  n  가로  m
void dfs(int x, int y, int cnt, int sum) {
	
	if(cnt == 4) {
		ans = max(ans, sum);
		return ;
	}
	
	check[x][y] = true;
	
	for(int i = 0 ; i < 4 ; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx >= 0 && nx < n && ny >= 0 && ny < m) {
			if(check[nx][ny] == false)
				dfs(nx, ny, cnt+1, sum + map[x][y]);
		}
	}
				
	check[x][y] = false;
}

void processNotDfs(int x, int y) {
	
	int cnt = 0;
	int sum = map[x][y];
	int minValue = 1001;
	
	for(int i = 0 ; i < 4 ; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(nx >= 0 && nx < n && ny >= 0 && ny < m) {
			cnt = cnt + 1;
			sum += map[nx][ny];
			
			minValue = min(minValue, map[nx][ny]);
		}
		
	}
	
	if(cnt == 4) {
		sum -= minValue;
	}
	
	ans = max(ans, sum);
	
}

int main() {
	cin >> n >> m;
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			cin >> map[i][j];
		}
	}
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			dfs(i,j,0,0);
			processNotDfs(i,j);
		}
	}
	
	cout << ans;
	
	
}