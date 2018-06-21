#include <iostream>
#include <vector>
#include <cstring>
#include <string>
using namespace std;

// 보드를 덮는 3가지 방법(nextY, nextX)
const int coveredType[4][3][2] {
	{{0,0}, {1,0}, {0,1}},
	{{0,0}, {0,1}, {1,1}},
	{{0,0}, {1,0}, {1,1}},
	{{0,0}, {1,0}, {1,-1}}
};

bool setBoard(vector<vector<int> >& board, int y, int x, int type, int delta) {
	bool ok = true;
	for(int i = 0 ; i < 3 ; i++) {
		const int nextX = x + coveredType[type][i][1];
		const int nextY = y + coveredType[type][i][0];
		if(nextY < 0 || nextY >= board.size() || nextX < 0 || nextX >= board[0].size()){
			ok = false;
		}
		else if((board[nextY][nextX] += delta) > 1) {
			ok = false;
		}
	}
	return ok;
}

int coverBoard(vector<vector<int> >& board) {
	int y = -1;
	int x = -1;
	
	for(int i = 0 ; i < board.size() ; i++) {
		for(int j = 0 ; j < board[0].size(); j++) {
			if(board[i][j] == 0) {
				y = i;
				x = j;
				break;
			}
		}
		if(y != -1) 
			break;
	}
	
	if(y == -1)
		return 1;
	
	int ret = 0;
	for(int type = 0 ; type < 4 ; type++) {
		if(setBoard(board,y,x,type,1))
			ret += coverBoard(board);
		setBoard(board,y,x,type,-1);
	}
	return ret;
}

int main() {
	int t;
	cin >> t;
	
	string tmp;
	
	while(t--) {
		int h,w;
		cin >> h >> w;
		vector<vector<int> > board(h, vector<int>(w,0));
		for(int i = 0 ; i < h ; i++) {
			cin >> tmp;
			for(int j = 0 ; j < w ; j++) {
				if(tmp[j] == '#'){
					board[i][j] = 1;
				}
				
			}
		}
		cout << coverBoard(board) << endl;
	}
	
}


