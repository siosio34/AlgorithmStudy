#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	
	while(cin >> n) {
		if(n == 0)
			break;
		
		// if(n == 1) {
		// 	cout << 1 << endl;
		// 	continue;
		// }
		int cnt = 0 ;
		
		
		for(int i = n+1 ; i <= 2*n ; i++) {
			
			bool isPrime = true;
			int j;
			for(j = 2 ; j <= sqrt(i)  ; j++) {
				if(i % j == 0) {
					isPrime = false;
					break;
				}
			}
			if(isPrime) {
				cnt++;
			}
		
		}
		cout << cnt << endl;
	}
	
	
}