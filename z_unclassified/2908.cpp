#include <iostream>
using namespace std;

int main() {
	int a,b;
	int ans = 0;
	cin >> a >> b;
	
	int tmpA, tmpB;
	tmpA = a % 10 * 100 + a / 10 % 10 * 10 + a / 100 % 10;
	tmpB = b % 10 * 100 + b / 10 % 10 * 10 + b / 100 % 10;
	
	cout << ( tmpA > tmpB ? tmpA : tmpB ) << endl;
	
	
}