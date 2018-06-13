#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	while(n--) {
		int k;
		cin >> k;
		
		int sum = 0;
		int tmp;
		while(k--) {
			cin >> tmp;
			sum += tmp;
		}
		cout << sum << endl;
	}
}