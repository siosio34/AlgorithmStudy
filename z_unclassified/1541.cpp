#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

	string s;
	cin >> s;
	vector<int> num;
	vector<int> sign;

	bool minus = false;
	int cur = 0;
	sign.push_back(1);
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '+' || s[i] == '-') {
			if (s[i] == '+') {
				sign.push_back(1);
			}
			else {
				sign.push_back(-1);
			}
			num.push_back(cur);
			cur = 0;
		}
		else {
			cur = cur * 10 + (s[i] - '0');
			// string 을 int 로 바꿔주기 위해 뒤에것 같은 행동을 한다.
		}
	}
	num.push_back(cur); // 맨마지막 숫자를 더한것이다
	int ans = 0;
	
	for (int i = 0; i < num.size(); i++) {

		if (sign[i] == -1) {
			minus = true;
		}
		if (minus) {
			ans -= num[i];
		}
		else {
			ans += num[i];
		}

	}
	cout << ans << endl;
	return 0;

}