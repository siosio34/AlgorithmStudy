#include <iostream>
using namespace std;

bool issosu(int k) {

	bool check = false;
	if (k == 1) return false;
	if (k == 2) return true;
	for (int i = 3; i < k; i++) {
		if (k % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n, m;

	cin >> n >> m;
	int answer = 0;

	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i%j == 0 && issosu(j)) {
				answer++;
				break;
			}
		}
		
	}
	cout << answer;


}

