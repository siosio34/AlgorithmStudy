#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int mirror[101][101];
bool isVisted[101][101];

typedef pair<int, pair<int, int> > pair_mirror;

int main() {
	int n,m;
	cin >> m >> n;
	
	int ans = 0;
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			scanf("%1d", &mirror[i][j]);
		}
	}
	
	priority_queue<pair_mirror, vector<pair_mirror>, greater<pair_mirror> > pq;
	
	pq.push(make_pair(0, make_pair(0,0)));
	isVisted[0][0] = true;
	
	while(!pq.empty()) {
		pair_mirror top = pq.top();
		pq.pop();
		
		int wall = top.first;
		int x = top.second.first; // 가로
		int y = top.second.second; // 세로
	
		if(x == n - 1 && y == m -1 ) {
			ans = wall;
			break;
		}
		
		for(int i = 0 ; i < 4 ; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx >= 0 && nx < n && ny >= 0 && ny < m && !isVisted[nx][ny]) {
				isVisted[nx][ny] = true;
				if(mirror[nx][ny] == 1) {
					pq.push(make_pair(wall + 1, make_pair(nx,ny)));
				} else {
					pq.push(make_pair(wall, make_pair(nx,ny)));
				}
			}
		}
		
	}
	
	cout << ans;
	
	
	
	
	
}