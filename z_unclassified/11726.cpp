#include <iostream>
using namespace std;

int d[1001];
int num;

int go(int n) {
	if (n <= 0) return 0;
	if (d[n] > 0) return d[n];
	d[n] = go(n - 1) + go(n - 2);

	return d[n] % 10007;

}

int main() {
	d[1] = 1;
	d[2] = 2;
	cin >> num;
	cout << go(num);
}