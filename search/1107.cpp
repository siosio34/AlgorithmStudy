#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool broken[11];
int gotoChannelCount[1000001];

int getClickNum(int c) {
	if(c == 0) {
		return broken[0] ? 0 : 1;
	}
	

	int len = 0;
	while (c > 0) {
		if(broken[c % 10]) return 0;
		len = len + 1;
		c /= 10;
	}
	return len;
}

int main() {
	int n;
	int brokenButtonNum;
	
	cin >> n >> brokenButtonNum;
	
	int whatBroken;
	for(int i = 0 ; i < brokenButtonNum ; i++) {
		cin >> whatBroken;
		broken[whatBroken] = true;
	}
	
	int min = abs(100 - n);
	for(int i = 0 ; i <= 1000000 ; i++) {
		int countClickNum = getClickNum(i);
		gotoChannelCount[i] = countClickNum > 0 ?  countClickNum :  abs(100 - i) ;
		

		int cnt = gotoChannelCount[i] + abs(n - i);

		if(min > cnt) {
			min = cnt;
		}
	}
	
	cout << min;
	
}