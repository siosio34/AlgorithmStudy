#include <iostream>
using namespace std;

int coin[11];
int main() {
	int n,k;
	
	cin >> n >> k;
	
	int maxIndex = 0;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> coin[i];
		if(coin[i] < k) {
			maxIndex = i;
		}
	}
	
	int ans = 0;
	
	cout << maxIndex << "*" << endl;
	
	while(k > 0) {
		ans += k / coin[maxIndex];
		k = k % coin[maxIndex];
		maxIndex--;
	}
	
	cout << ans;
	
}