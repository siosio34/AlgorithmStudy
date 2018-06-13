#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool brokenButton[10];

int possible(int c) {
	if (c == 0) {
		return brokenButton[0] ? 0 : 1;
	}

	int len = 0;
	while (c > 0) {
		if (brokenButton[c % 10]) 
			return 0;
		len += 1;
		c /= 10;
	}
	return len;
}

int main() {

	int num;
	cin >> num;

	int brokenNum;
	cin >> brokenNum;

	int temp;
	for (int i = 0; i < brokenNum; i++) {
		cin >> temp;
		brokenButton[temp] = true;
	}

	int ans = 0;
	ans = abs(num - 100);

	for (int i = 0; i < 100000; i++) {
		int c = i;
		int len = possible(c);
		if (len > 0) {
			if (ans > len + abs(c - num))
				ans = len + abs(c - num);
		}
	}
	cout << ans;
}