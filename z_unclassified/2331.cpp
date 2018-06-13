#include <iostream>
#include <math.h>
using namespace std;
 
int length;
int check[1000000];

int next(int a, int p) {
	int ans = 0;;
	while (a > 0) {
		ans += pow(a % 10, p);
		a /= 10;
	}
	return ans;
}

// a는 입력숫자 p는 몇번을 곱해야 하는가?
int getLength(int a, int p, int cnt) {
	if (check[a] != 0) {
		return check[a] - 1;
	}
	check[a] = cnt;
	int b = next(a, p);
	return getLength(b, p, cnt + 1);
}

int main() {
	int A, P;
	cin >> A >> P;
	cout << getLength(A, P, 1);
}