#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	int t;
	cin >> t;
	
	int max_money = -1;
	int a,b,c;

	while(t--) {
		cin >> a >> b >> c;
		
		int ans;
		if(a== b && b == c) {
			ans = 10000 + a * 1000;
		} else if(a == b || a == c) {
			ans = 1000 + a * 100;
		} else if(b == c) {
			ans = 1000 + b * 100;
		} else {
			ans = max({ a,b,c }) * 100;
		}
		
		if(max_money < ans) {
			max_money = ans;
		}
			
	}
	cout << max_money << endl;
}