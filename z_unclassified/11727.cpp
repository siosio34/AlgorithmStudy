#include <iostream>
using namespace std;

int d[1001];
int num;

void go(int n) {


	d[n] = d[n - 1] + 2 * d[n - 2];
	d[n] = d[n] % 10007;

}

int main() {
	d[1] = 1;
	d[2] = 3;

	cin >> num;

	if (num > 2) {
		for (int i = 3; i <= num; i++) {
			go(i);
		}
	}

	cout << d[num];
	return 0;
}