#include <iostream>
#include <algorithm>
using namespace std;

int d[1001]; // 동적 계획법을 위한 변수
int p[1001]; // 팔았을때 얻게 되는 가치

// 붕어빵 갯수 최대 천개
void go(int temp) {

	for (int k = 1; k <= temp; k++) {
		for (int j = 1; j <= k; j++) {
			d[k] = max((p[j] + d[k - j]), d[k]);
		}
	}
}

int main() {

	int num; 
	int temp;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cin >> temp;
		p[i] = temp;
	}
		
	go(num);

	cout << d[num];

}