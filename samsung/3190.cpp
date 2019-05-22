#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

// 3190 뱀 뱀은 무서워! 

int n;
int apple;

bool map[101][101];
bool isApple[101][101];

int dx[4] = { 1 , -1 ,0 , 0 };
int dy[4] = { 0, 0, 1, -1 };

int snakeHeadX, snakeHeadY;
int snakeTailX, snakeTailY;

int start;
// 오른쪽 0;
// 왼쪽 1;
// 아래쪽 2;
// 위쪽 3;


queue<pair<int, char> > driftQueue;
queue<pair<int, int> > saveHeadXY;

int snakeHeadDircetion;
int snakeLen = 1;

int ans = 0;

bool isEndGame(int x, int y) {
	if(x > n || x < 1 || y > n || y < 1) {
		// 나갔을때 
		return true;
	}
	
	if(map[x][y] == true) {
		// 이미 지나간 곳일때 
		return true;
	}
	
	return false;
}

void changeHeadDircection(char draftDirection) {
	
	if(snakeHeadDircetion == 0) {
	  if(draftDirection == 'L') {
		  snakeHeadDircetion = 3;
	  } else if(draftDirection == 'D') {
		  snakeHeadDircetion = 2;
	  }
	} else if(snakeHeadDircetion == 1) {
	  if(draftDirection == 'L') {
		  snakeHeadDircetion = 2;
	  } else if(draftDirection == 'D') {
		  snakeHeadDircetion = 3;
	  }
		
	} else if(snakeHeadDircetion == 3) {
		if(draftDirection == 'L') {
		  snakeHeadDircetion = 1;
	  } else if(draftDirection == 'D') {
		  snakeHeadDircetion = 0;
	  }
		
	} else if(snakeHeadDircetion == 2) {
		if(draftDirection == 'L') {
		  snakeHeadDircetion = 0;
	  } else if(draftDirection == 'D') {
		  snakeHeadDircetion = 1;
	  }
		
	}
}

void moveSnake() {
	map[snakeHeadY][snakeHeadX] = true;
	saveHeadXY.push(make_pair(snakeHeadX, snakeHeadY));
			
	if(isApple[snakeHeadY][snakeHeadX]) {
		isApple[snakeHeadY][snakeHeadX] = false;
	} else {
		// 사과가 없으면 꼬리는 비움.
		map[snakeTailY][snakeTailX] = false;
		snakeTailX = saveHeadXY.front().first;
		snakeTailY = saveHeadXY.front().second;
		saveHeadXY.pop();
	}
}

int main() {
	
	snakeHeadDircetion = 0;
	snakeHeadX = 1;
	snakeHeadY = 1;
	snakeTailX = 1;
	snakeTailY = 1;
	cin >> n >> apple;
	
	int appleX, appleY;
	for(int i = 0 ; i < apple ; i++) {
		cin >> appleX >> appleY;
		isApple[appleX][appleY] = true;
	}
	
	int draft;
	cin >> draft;
	
	int x;
	char c;
	for(int i = 0 ; i < draft ; i++) {
		cin >> x >> c;
		driftQueue.push(make_pair(x,c));
	}
	
	while(!driftQueue.empty()) {
		
		int distance = driftQueue.front().first;
		int direction = driftQueue.front().second;
		
		
		int second = distance - start;
		start = distance;
		
		while(second--) {
			
			ans = ans + 1;
			
			snakeHeadX = snakeHeadX + dx[snakeHeadDircetion];
			snakeHeadY = snakeHeadY + dy[snakeHeadDircetion];
				
			if(isEndGame(snakeHeadY, snakeHeadX)) {
				cout << ans;
				return 0;
			}
			
			moveSnake();
		}
		
		changeHeadDircection(direction);
		
		driftQueue.pop();
	}
	
	// 더이상 드리프트를 할필요가없을대
	
	while(1) {
		ans = ans + 1;
			
		snakeHeadX = snakeHeadX + dx[snakeHeadDircetion];
		snakeHeadY = snakeHeadY + dy[snakeHeadDircetion];

		if(isEndGame(snakeHeadY, snakeHeadX)) {
			cout << ans;
			return 0;
		}
		
		moveSnake();
			
	}
	
}