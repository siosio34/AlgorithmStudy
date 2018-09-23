#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

int a[101][101];
int dis[101][101];
int area[101][101];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int main() {
	int n;
	scanf("%d",&n);
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	
	int cnt = 0 ;
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < n ; j++) {
			if(a[i][j] == 1 && area[i][j] == 0) {
				area[i][j] == ++cnt;
				queue<pair<int,int> > q;
				q.push(make_pair(i,j));
			
				while(!q.empty()) {
					int x = q.front().first;
					int y = q.front().second;
					q.pop();
					for(int k = 0 ; k < 4 ; k++) {
						int nx = x+dx[k];
                        int ny = y+dy[k];
						if (0 <= nx && nx < n && 0 <= ny && ny < n) {
						 	if (a[nx][ny] == 1 && area[nx][ny] == 0) {
                                area[nx][ny] = cnt;
                                q.push(make_pair(nx,ny));
                            }
                        }
					}
				}
			}
		}
	}
	
	int ans = -1;
	for(int l = 1 ; l <= cnt ; l++) {
		queue<pair<int,int> > q;
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < n ; j++) {
				dis[i][j] = -1;
				if(area[i][j] == l) {
					q.push(make_pair(i,j));
					dis[i][j] = 0;
				}
			}
		}
		while(!q.empty()) {
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			for(int k = 0 ; k <4 ; k++) {
				int nx = x+dx[k];
				int ny = y+dy[k];
				if(0 <= nx && nx < n && 0 <= ny && ny < n) {
					if(dis[nx][ny] == -1) {
						dis[nx][ny] = dis[x][y] + 1;
						q.push(make_pair(nx,ny));
					}
				}
			}
		}
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < n ; j++) {
				if(a[i][j] == 1 && area[i][j] != l) {
					if(ans == -1 || dis[i][j] -1 < ans) {
						ans = dis[i][j] - 1;
					}
				}
			}
		}
	}
	cout << ans << endl;
	return 0;
}