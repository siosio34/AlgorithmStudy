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
	int m, n;
	cin >> m >> n;
	int sum = 0;
	bool check = false;
	
	for (int i = m; i <= n; i++) {
		if (issosu(i)) {
			sum += i;
			check = true;
		}
	}
	if (check)
		cout << sum;
	else
		cout << -1;

	return 0;
	
}