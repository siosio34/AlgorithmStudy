#include <iostream>
using namespace std;

int main() {
	
	int num;
	cin >> num;
	
	if(num % 10 != 0) {
		cout << -1;
		return 0;
	}
	
	int tmp = num / 10;
	cout << tmp / 30 << " " << tmp % 30 / 6 <<" "<< tmp %30 % 6;

	
}