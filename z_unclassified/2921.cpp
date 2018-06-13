#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int ans = 0;
	for(int i = 0 ; i < n + 1 ; i++) {
		for(int j = 0 ; j < i + 1 ; j++) {
			ans += (i+j);
		}
	}
	cout << ans;
	
	// 1 , 0 , 0
	// 1 , 2 
}