#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	if(n == 1) {
		cout << "*";
		return 0;
	}
	
	for(int i = 0 ; i < n ; i++) {
		if(i == n-1) {
			cout << "*";
		} else {
			cout << " ";
		}
	}
	cout << endl;
	
	for(int i = 1 ; i < n-1 ; i++) {
		for(int j = 0 ; j < n + i ; j ++) {
			if(j == n + i -1  || j == n - i-1 ) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}

	
	for(int i = 0 ; i < 2 * n -1 ; i++) {
		cout << "*";
	}
}