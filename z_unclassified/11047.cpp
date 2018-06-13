#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	vector<int> a;
	int answer = 0;

	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		a.push_back(temp);
	}

	for (int i = N-1; 0 <= i; i--) {
		answer += K / a[i];
		K %= a[i];
	}
	cout << answer << endl;
	return 0;

}