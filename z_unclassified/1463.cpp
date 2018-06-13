#include <iostream>
#include <math.h>
using namespace std;

int d[1000001];
int num;
int count = 0;

int go(int n) {
	if (n == 1) return  0;
	if (d[n] > 0) return d[n];
	d[n] = go(n - 1) + 1; // 1À»»«°Í
	if (n % 2 == 0) {
		int temp = go(n / 2) + 1;
		if (d[n] > temp) d[n] = temp;
	}
	if (n % 3 == 0) {
		int temp = go(n / 3) + 1;
		if (d[n] > temp) d[n] = temp;
	}
	return d[n];
}

int go2(int n) {
	if (n == 1) return 0;
	if (d[n] > 0) return d[n];
	

}

int main() {
	cin >> num;
	cout << go(num);
}