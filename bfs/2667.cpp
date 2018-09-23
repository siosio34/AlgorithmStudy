#include <iostream>
#include <queue>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
int d[30][30];
int a[30][30];
int ans[25 * 25];
int n;

void bfs(int x,int y, int cnt) {
	queue<pair<int,int>> q;
	q.push(make_pair(x,y));
	d[x][y] = cnt;
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for(int i = 0 ; i < 4 ; i++) {
			int nextX = x + dx[i];
			int nextY = y + dy[i];
			if(0 <= nextX && nextX < n && 0 <= nextY && nextY < n) {
				if(a[nextX][nextY] == 1 && d[nextX][nextY] == 0) {
					q.push(make_pair(nextX,nextY));
					d[nextX][nextY] = cnt;
				}
			}
		}
	}
	
}

int main() {

	cin >> n;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			scanf("%1d",&a[i][j]);
		}
	}
	int cnt = 0;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			if(a[i][j] == 1 && d[i][j] == 0) {
				bfs(i,j,++cnt);
			}
		}
	}
	cout << cnt << '\n';
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			ans[d[i][j]] += 1;
		}
	}
	sort(ans+1, ans+cnt+1);
	for(int i = 1 ; i <= cnt ; i++) {
		cout << ans[i] << '\n';
	}
	
}
