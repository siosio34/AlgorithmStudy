#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 0 ;
	
	int t;
	int tmpA, tmpB;
	cin >> t;
	while(t--) {
		cin >> tmpA >> tmpB;
		if(tmpB > tmpA) {
			b++;
		} else if(tmpB < tmpA) {
			a++;
		}
	}
	cout << a << " " << b;
}