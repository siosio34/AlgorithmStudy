#include <iostream>
using namespace std;

int d[11];

int main() {
	
	int t;
	int tmp;
	cin >> t;
	
	d[0] = 1;
	d[1] = 1;
	d[2] = 2;
	
	for(int i = 3 ; i < 11 ; i++) {
		d[i] = d[i-1] + d[i-2] + d[i-3];
	}

	while(t--) {
		cin >> tmp;
		cout << d[tmp] << endl;
	}
}