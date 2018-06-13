#include <algorithm>
#include <iostream>
using namespace std;

int a[3];

int main() {
	int tmp;
	for(int i = 0 ;i < 3 ; i++) {
		cin >> tmp;
		a[i] = tmp;
	}
	sort(a,a+3);
	cout << a[0] << " " << a[1] << " " << a[2];
}