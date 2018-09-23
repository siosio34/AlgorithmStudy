#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int a[101][101];
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

int main() {
	int n,m;
	cin >> n >> m;
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			scanf("%1d",&a[i][j]);
		}
	}
	
	queue<pair<int,int> > q;
	q.push(make_pair(0,0));
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			while(!q.empty()) {
				
	
			int x = q.front().first;
			int y = q.front().second;
			q.pop();
			for(int k = 0 ; k < 4 ; k++) {
				int nx = x + dx[k];
				int ny = y + dy[k];
				if(0<= nx && nx < n && 0 <= ny && ny < m && a[nx][ny] == 1) {
					a[nx][ny] = a[x][y] + 1;
					q.push(make_pair(nx,ny));
				}
			}
						}
		}
	}
	cout << a[n-1][m-1];
}