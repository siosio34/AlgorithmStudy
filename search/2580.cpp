#include <iostream>
using namespace std;

int area[10][10];
bool checkRow[10][10];
bool checkCol[10][10];
bool checkArea[10][10];

int square(int x, int y) {
	return (x / 3) * 3 + y / 3;
}

bool checkRowContain(int n, int row) {
	return !checkRow[row][n];
}

bool checkColumnContain(int n, int col) {
	return !checkCol[col][n];
}

bool checkInAreaContain(int n, int area) {
	return !checkArea[area][n];
}

bool checkAll(int row, int col, int n) {
	return checkRowContain(n, row) && checkColumnContain(n, col) && checkInAreaContain(n, square(row,col));
}

void solve(int n) {
	if(n == 81) {
		for(int i = 0 ; i < 9 ; i++) {
			for(int j = 0 ; j < 9 ; j++) {
				cout << area[i][j] << " ";
			}
			cout << endl;
		}
		return ;
	}

	
	int x = n / 9;
	int y = n % 9;
	
	if(area[x][y] != 0) {
		solve(n+1);
	}
	
	else {
		for(int i = 1 ; i <= 9 ; i++) {
			if(checkAll(x, y, i)) {
				checkRow[x][i] = true;
				checkCol[y][i] = true;
				checkArea[square(x,y)][i] = true;
				area[x][y] = i;
				
				solve(n+1);
				
				checkRow[x][i] = false;
				checkCol[y][i] = false;
				checkArea[square(x,y)][i] = false;
				area[x][y] = 0;
				
			}
		}
	}
	
}

int main() {
	for(int i = 0 ; i < 9 ; i++) {
		for(int j = 0 ; j < 9 ; j++) {
			cin >> area[i][j];
			if(area[i][j] != 0)
			checkRow[i][area[i][j]] = true;
			checkCol[j][area[i][j]] = true;
			checkArea[square(i,j)][area[i][j]] = true;

		}
	}
	
	solve(0);
	
	
}
