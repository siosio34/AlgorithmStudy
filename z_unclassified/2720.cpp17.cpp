#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	int tmp;
	while(t--) {
		cin >> tmp;
		cout << tmp / 25 << " " << tmp % 25 / 10 << " " << tmp %25 % 10 / 5 << " " << tmp % 25 % 10 % 5 << endl;
	}
	
	
}