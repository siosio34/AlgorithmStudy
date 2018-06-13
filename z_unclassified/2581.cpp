#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> primeVector;

int main() {
	
	int m,n;
	cin >> m >> n;
	
	int sum = 0 ;
	int min_num = -1;
	bool isPrime;
	
	if(n == 1) {
		cout << -1 << endl;
		return 0;
	}

	for(int i = m ; i <= n ; i++) {
		isPrime = true;
		if(i == 1) {
			continue;
		}
		for(int j = 2; j <=sqrt(i) ; j++) {
			if(i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if(isPrime) {
			if(min_num == -1) {
				min_num = i;
			}
			sum += i;
		}
	}
	
	if(min_num == -1) {
		cout << -1 << endl;
	} else {
		cout << sum << endl;
		cout << min_num << endl;
	}
	
	
	
	
	
}