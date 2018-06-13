#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int a = 100;
	int b = 100;
	int l,m;
	for(int i =0 ; i < n ; i++) {
		cin >> l >> m;
		if(l > m) {
			b -= l;
		} else if (m > l) {
			a -= m;
		}
	}
	cout << a <<endl;
	cout << b;
}