#include <iostream>
using namespace std;

int main() {

	int n, m, k;
	int team = 0;

	// n은 여자 m 은 남자 k 는 인턴쉽팀.

	cin >> n >> m >> k;
	while (1) {

		if (n + m >= k + 3 && n >= 2 && m >= 1) {
			n -= 2;
			m -= 1;
			team++;
		}
		else {
			break;
		}
	}
	cout << team << endl;

}