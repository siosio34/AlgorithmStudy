#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		int a[5];
		int sum = 0 ;
		for(int j = 0 ; j < 5 ; j++) {
			cin >> a[j];
			sum += a[j];
		}
		sort(a,a+5);
		
		if(a[3]-a[1] >=4) {
			cout <<"KIN" << endl;
		} else {
			cout << sum - a[0] - a[4]  << endl;
		}
		
	}
}