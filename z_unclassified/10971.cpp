#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int W[11][11];


int main() {
	int num;
	cin >> num;

	vector<int> d;

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= num; j++) {
			cin >> W[i][j];
		}
		d.push_back(i);
	}

	int ans = 20000000;

	do {
		if (d[0] != 1) break;

		bool ok = true;
		int sum = 0;
		for (int i = 0; i < num-1; i++) {
			if (W[d[i]][d[i + 1]] == 0) {
				ok = false;
			}
			else {
				sum += W[d[i]][d[i + 1]];
			}
		}
		
		if (ok && W[d[num-1]][d[0]] != 0) {
			sum += W[d[num-1]][d[0]];
			if (ans > sum)
				ans = sum;
		}

	} while (next_permutation(d.begin(), d.end()));
	cout << ans;
}