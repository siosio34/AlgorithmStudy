#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int tmp;
	while(1) {
		cin >> tmp;
		if(tmp == 0) {
			break;
		}
		if(tmp % n == 0) {
			cout << tmp << " is a multiple of "<< n <<"." <<endl;
		} else {
			cout << tmp << " is NOT a multiple of "<<n<<"." <<endl;
		}
		
	}
	return 0;
}