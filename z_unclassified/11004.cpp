#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int problem[5000001];

int main() {

	// ����Ʈ ���� �ص� �ǰ� stl ���ǰ�
	int number, k;
	cin >> number >> k;

	for (int i = 0; i < number; i++) {
		scanf("%d", &problem[i]);
	}
	nth_element(problem, problem + (k-1), problem  + number);
	printf("%d\n", problem[k]);
	
	return 0;
}