#include <iostream>
using namespace std;

int main() {
	int min = 101;
	int sum = 0;
	int tmp;
	for(int i = 0 ; i < 7 ; i++) {
		cin >> tmp;
		if(tmp % 2 != 0) {
			sum += tmp;
			if(tmp < min) {
				min = tmp;
			}
		}
	}
	
	if(sum == 0 )
		cout << -1;
	else {
		cout << sum << endl;
		cout << min;
	}
}