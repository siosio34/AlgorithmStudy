#include <iostream>
using namespace std;

int n;
bool area[15][15];



bool check(int row, int col) {
	for (int i = 0; i < n; i++) {
		if (i == row)
			continue;
		if (area[i][col]) {
			return false;
		}
	}

	int x = row - 1;
	int y = col - 1;
	while (x >= 0 && y >= 0) {
	
		if (area[x][y])
			return false;

		x = x - 1;
		y = y - 1;
	}

	x = row - 1 ;
	y = col + 1;
	while (x >= 0 && y < n) {

		if (area[x][y])
			return false;

		x = x - 1;
		y = y + 1;
	}
	return true;
}

int solve(int row) {
	
	if(row == n)
		return 1;

	int ans = 0 ;
	for(int i = 0 ; i < n ; i++) {
		area[row][i] = true;
		if(check(row, i)) {
			ans += solve(row + 1);
		}	
		area[row][i] = false;
	}
	
	return ans;

}

int main() {

	cin >> n;

	int sum = solve(0);
	cout << sum;


	
}