#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	int sum;
	int k;
	for(int i = 1 ; i < n ; i++) {
		sum = i;
		k = i;
		while(k > 0) {
			sum += k % 10;
			k = k /10;
		}
		if(sum == n) {
			cout << i ;
			return 0;
		}
	}
	cout << 0 << endl;
	
}