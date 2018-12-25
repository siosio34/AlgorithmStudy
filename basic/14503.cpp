#include <iostream>
#include <queue>
using namespace std;


int dx[4] = {-1 , 0 , 1, 0};
int dy[4] = {0, 1, 0, -1};

int area[51][51];

bool check[51][51];
int n,m;

int turn_robot(int now, int is_turn) {
	if(is_turn) {
		if(now == 0)
			return 3;
		else if(now == 1)
			return 0;
		else if(now == 2)
			return 1;
		else
			return 2;
	}
	else 
		return (now+2) % 4;
}

int ans = 0;

void dfs(int x,int y, int direction) {
	
	for(int i = 0 ; i < 4; i++) {
		int next_direction = turn_robot(direction, true);
		int next_x = x + dx[next_direction];
		int next_y = y + dy[next_direction];
		
		// 턴
		if(area[next_x][next_y] == 0) {
			ans++;
			area[next_x][next_y] = 2;
			dfs(next_x, next_y, next_direction);
			return ;
		} else {
			direction = next_direction;
		}
	}
	
	// 후진
	int next_direction = turn_robot(direction, false);
	
	int next_x = x + dx[next_direction];
	int next_y = y + dy[next_direction];
	if(area[next_x][next_y] == 1) {
		return ;
	}
	
	dfs(next_x, next_y, direction);
	
}

int main() {

	cin >> n >> m;
	
	int robot_x, robot_y, direction;
	cin >> robot_x >> robot_y >> direction;
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < m ; j++) {
			cin >> area[i][j];
		}
	}
	
	dfs(robot_x, robot_y, direction);
	cout << ans + 1;
	
	
}