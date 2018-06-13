#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	int sum = 0;
	int c[3];
	
	int i = 0 ;
	
	while (b) {
		int num = b % 10;
		b/=10;
		c[i] = num * a ;
		cout << c[i]<< endl;
		i++;
	}
	
	cout << 100 * c[2] + 10 * c[1] + c[0];
}