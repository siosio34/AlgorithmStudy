#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		
		int a[21];
		
		for(int i =0 ; i < n ; i++) {
			cin >> a[i];
		}
		
		sort(a, a+n);
		int sum = 0 ;
		for(int i = 1 ; i < n ; i++) {
			sum += a[i] - a[i-1];
		}
		cout << sum * 2 << endl;
	}
}