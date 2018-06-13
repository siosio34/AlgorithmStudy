#include <iostream>
using namespace std;

int a[101];

int main() {
	int tmp;
	for(int i = 0 ; i < 9 ; i++) {
		cin >> tmp;
		a[tmp] = i+1;
	}
	
	for(int i = 100 ; i > 0 ; i--) {
		if(a[i] > 0 ) {
			cout << i << endl;
			cout << a[i];
			return 0;
		}
	}
}