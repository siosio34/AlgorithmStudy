#include <iostream>
#include <vector>
using namespace std;

int n, s;

int a[21];
int ans;

void go(int i,int sum) {
	
	if (i == n) {
		if (sum == s) {
			ans += 1;
		}
		return;
	}

	go(i + 1, sum + a[i]);
	go(i + 1, sum);

}

int main() {

	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ans = 0;
	go(0,0);
	if (s == 0) ans -= 1;
	cout << ans;
	return 0;
}