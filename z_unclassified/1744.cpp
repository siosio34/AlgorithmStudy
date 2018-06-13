#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 양수는 큰수끼리 음수는 작은수끼리

int main() {

	int num; 
	vector<int> plus;
	vector<int> minus;
	int zeroSize = 0;
	int oneSize = 0;
	int answer = 0;

	int temp;
	cin >> num;
	for (int i = 0; i< num; i++) {
		cin >> temp;

		if (temp == 1) {
			oneSize += 1;
		}
		else if (temp > 0) {
			plus.push_back(temp);
		}
		else if (temp < 0) {
			minus.push_back(temp);
		}
		else {
			zeroSize += 1;
		}
	}

	sort(plus.begin(), plus.end());
	reverse(plus.begin(), plus.end());
	sort(minus.begin(), minus.end());

	if (plus.size() % 2 == 1) {
		plus.push_back(1);
	} 
	if (minus.size() % 2 == 1) {
		minus.push_back(zeroSize > 0 ? 0 : 1);
	}
	answer = oneSize;
	for (int i = 0; i < plus.size(); i+=2) {
		answer += plus[i] * plus[i + 1];
	}

	for (int i = 0; i < minus.size(); i += 2) {
		answer += minus[i] * minus[i + 1];
	}

	cout << answer;
	return 0;

	
}