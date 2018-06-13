#include <iostream>
using namespace std;
int a[101][101];
long long distan[101][101];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	distan[0][0] = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == 0 && j == 0) continue;

			for (int k = 0; k < j; k++) {
				if (k + a[i][k] == j) {
					distan[i][j] += distan[i][k];
				}
			}

			for (int k = 0; k < i; k++) {
				if (k + a[k][j] == i) {
					distan[i][j] += distan[k][j];
				}
			}
		}
	}
	cout << distan[n - 1][n - 1] << endl;
	return 0;
}