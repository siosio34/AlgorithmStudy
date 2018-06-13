#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main() {
	int num;
	cin >> num;

	// pair 두 자료형을 묶어주는 c++ 자료구조
	// 첫번째 비교하고 같으면 뒤에거 비교해서 정렬
	// cout은 시간이 많이 걸려서 printf로 바꿔줘야한다.
	vector<pair<int, int> > xyNum(num);

	for (int i = 0; i < num; i++) {
		cin >> xyNum[i].first >> xyNum[i].second;
	}
	sort(xyNum.begin(), xyNum.end());
	for (int i = 0; i < num; i++) {
		printf("%d %d\n", xyNum[i].first, xyNum[i].second);
	}

	return 0;
}