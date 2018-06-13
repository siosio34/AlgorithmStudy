#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		
		int a[7];
		int sum = 0 ;
		for(int i = 0 ; i< 7 ; i++) {
			cin >> a[i];
		}
		sort(a,a+7);
		
		int minNum = 0 ;
		for(int i = 6; i >= 0; i--) {
			if(a[i] % 2 == 0) {
				minNum = a[i];
				sum += a[i];
			}
		}
		
		cout << sum << " " << minNum << endl;
	}
}