#include <iostream>
#include <queue>
#include <stdio.h>
using namespace std;

int a[101][101];
int check[101][101];
int answer;

int col, row;

void bfs() {

	int dx[4] = { 0,0,1,-1 };
	int dy[4] = { 1,-1,0,0 };

	queue<pair<int, int> > queueTemp;
	queueTemp.push(make_pair(0, 0));

	while (!queueTemp.empty()) {
		int x = queueTemp.front().first;
		int y = queueTemp.front().second;
		queueTemp.pop();

		int newX;
		int newY;
		
		//answer++;
		for (int i = 0; i < 4; i++) {
			 newX = x + dx[i];
			 newY = y + dy[i];

			 if (0 <= newX && newX < col && 0 <= newY && newY < row) {
				 if (a[newX][newY] == 1 && check[newX][newY] == 0) {
					 queueTemp.push(make_pair(newX, newY));
					 check[newX][newY] = check[x][y] + 1;
				 }
			 }
		}
	 }

}

int main() {
	cin >> col >> row;
	answer = 0;

	for (int i = 0; i < col; i++) {
		for (int j = 0; j <row; j++) {
			scanf("%1d", &a[i][j]);
		}
	}
	bfs();
	cout << check[col-1][row-1] + 1 << endl;
}
