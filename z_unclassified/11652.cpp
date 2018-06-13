#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num;
	cin >> num;
	vector<long long> a(num);

	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}

	sort(a.begin(),a.end());
	long long answer = a[0];
	int ans_cnt = 1;
	int cnt = 1;

	for (int i = 1; i < num; i++) {
		if (a[i] == a[i - 1]) {
			cnt += 1;
		}
		else {
			cnt = 1;
		}
		if (ans_cnt < cnt) {
			ans_cnt = cnt;
			answer = a[i];
		}
	}
	cout << answer;

	return 0;
}