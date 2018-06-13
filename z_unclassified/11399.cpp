#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int num;
	cin >> num;

	int ans = 0;
	vector<int> a(num);

	for (int i = 0; i < num; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	int watingSum = 0;
	
	for (int i = 0; i < num; i++) {
		watingSum += a[i];
		ans += watingSum;
	}

	cout << ans << endl;
	return 0;

}