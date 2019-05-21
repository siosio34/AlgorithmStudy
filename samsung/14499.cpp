#include <iostream>
using namespace std;

// 14499 - 주사위 굴리기

int n,m,x,y,k;

int dice[7];
int cloneDice[7];
int map[21][21];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void changeDice(int direction) {
	
	for(int i = 1 ; i <= 6 ; i++) {
		cloneDice[i] = dice[i];
	}
	
	if(direction == 1) {
		dice[1] = cloneDice[4];
		dice[3] = cloneDice[1];
		dice[4] = cloneDice[6];
		dice[6] = cloneDice[3];
	} else if(direction == 2) {
		dice[1] = cloneDice[3];
		dice[3] = cloneDice[6];
		dice[4] = cloneDice[1];
		dice[6] = cloneDice[4];
	} else if(direction == 3) {
		dice[1] = cloneDice[5];
		dice[2] = cloneDice[1];
		dice[5] = cloneDice[6];
		dice[6] = cloneDice[2];
	} else if(direction == 4) {
		dice[1] = cloneDice[2];
		dice[2] = cloneDice[6];
		dice[5] = cloneDice[1];
		dice[6] = cloneDice[5];
	}
}

int main() {
	
	cin >> n >> m >> x >> y >> k;
	
	for(int i = 0 ; i < n ; i++ ) {
		for(int j = 0 ; j < m; j++) {
			cin >> map[i][j];
		}
	}

	
	for(int i = 0 ; i < k ; i++) {
		int direction;
		cin >> direction;
		
		// x 는 행번호 y는 열번호
		int nx = x + dy[direction - 1];
		int ny = y + dx[direction - 1];
		
		if(0 <= nx && nx < n && 0 <= ny && ny < m) {
			changeDice(direction);
			if(map[nx][ny] == 0) {
				map[nx][ny] = dice[6];
			} else {
				dice[6] = map[nx][ny];
				map[nx][ny] = 0;
			}
			
			x = nx;
			y = ny;
			cout << dice[1] << endl;
		}
	}
	
	
}