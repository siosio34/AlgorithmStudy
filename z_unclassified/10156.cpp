#include <iostream>
using namespace std;

int main() {
	int k,n,current;
	cin >> k >> n >> current;
	int ans = k * n - current;
	if(ans < 0) {
		ans = 0;
	} 
	cout << ans;
	
}