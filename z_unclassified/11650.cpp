#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main() {
	int num;
	cin >> num;

	// pair �� �ڷ����� �����ִ� c++ �ڷᱸ��
	// ù��° ���ϰ� ������ �ڿ��� ���ؼ� ����
	// cout�� �ð��� ���� �ɷ��� printf�� �ٲ�����Ѵ�.
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