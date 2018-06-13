#include <iostream>
using namespace std;

int a[9][9];

bool check1[9][10];
bool check2[9][10];
bool check3[9][10];

int square(int x, int y) {
	return (x / 3) * 3 + y / 3;
}

void go(int z) {
	if (z == 81) {
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
		return;
	}
	int x = z / 9, y = z % 9;
	if (a[x][y] != 0) {
		go(z + 1);
	}
	else {
		for (int i = 1; i <= 9; i++) {
			if (check1[x][i] == false && check2[y][i] == false && check3[square(x, y)][i] == false) {
				check1[x][i] = check2[y][i] = check3[square(x, y)][i] = true;
 				a[x][y] = i;
              	go(z + 1);
				a[x][y] = 0;
				check1[x][i] = check2[y][i] = check3[square(x, y)][i] = false;
			}
		}
	}
}

int main() {
	for (int i = 0; i < 9; i++)
		for (int j = 0; j < 9; j++) {
			cin >> a[i][j];
			if (a[i][j] != 0) {
				check1[i][a[i][j]] = true;
				check2[j][a[i][j]] = true;
				check3[square(i,j)][a[i][j]] = true;
			}
		}

	go(0);
	
}