#include <iostream>
#include <vector>
using namespace std;

int newArray[2188][2188];
int cnt[3];

bool same(int x, int y, int n) {
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (newArray[x][y] != newArray[i][j]) {
				return false;
			}
		}
	}
	return true;
}

void solve(int x, int y, int n) {
	if (same(x, y, n)) {
		cnt[newArray[x][y] + 1] += 1;
		return;
	}

	int m = n / 3;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			solve(x + i*m, y + j * m, m);
		}
	}

}


int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> newArray[i][j];
		}
	}

	solve(0, 0, n);

	for (int i = 0; i < 3; i++) {
		cout << cnt[i] << endl;
	}
	return 0;

}

