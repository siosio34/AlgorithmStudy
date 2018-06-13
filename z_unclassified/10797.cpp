#include <iostream>
using namespace std;

int a[5];

int main() {
	int n;
	cin >> n;
	
	int tmp;
	int cnt = 0;
	for(int i = 0 ; i <5 ; i++) {
		cin >> tmp;
		if(tmp == n)
			cnt++;
	}
	cout << cnt;
}