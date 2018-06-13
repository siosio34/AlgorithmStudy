#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int ans = 0;

bool a[15][15];

bool check(int row, int col) {
	for (int i = 0; i < n; i++) {
		if (i == row)
			continue;
		if (a[i][col]) {
			return false;
		}
	}

	int x = row - 1;
	int y = col - 1;
	while (x >= 0 && y >= 0) {
	
		if (a[x][y])
			return false;

		x = x - 1;
		y = y - 1;
	}

	x = row - 1 ;
	y = col + 1;
	while (x >= 0 && y < n) {

		if (a[x][y])
			return false;

		x = x - 1;
		y = y + 1;
	}
	return true;
}

void go(int row) {
	if (row == n)
		ans += 1;
	for (int col = 0; col < n; col++) {
		a[row][col] = true;
		if (check(row, col))
			go(row + 1);
		a[row][col] = false;
	}
}


int main() {

	cin >> n;
	go(0);
	cout << ans << endl;
	return 0;

}