#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int a[1001][1001];
int checked[1001][1001];
int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};
int m,n;
queue<pair<int,int> > q;
void bfs() {

	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();

		for(int i = 0 ; i < 4 ; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(0 <= nx && nx < n && 0 <= ny && ny < m && a[nx][ny] == 0) {
				q.push(make_pair(nx,ny));
				a[nx][ny] = a[x][y] + 1;
			}
		}
	}
}

int main() {

	cin >> m >> n;
	for(int i =0 ; i < n ; i++) {
		for(int j = 0 ; j < m  ; j++) {
			cin >> a[i][j];
		}
		
	}
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			if(a[i][j] == 1) {
				q.push(make_pair(i,j));
			}
		}
	}
	
	bfs();
	
	int ans = 1;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			if(a[i][j] == 0) {
				cout << -1 << endl;
				return 0;
			}
			ans = max(ans, a[i][j]);
		}
	}
	cout << ans - 1;
}