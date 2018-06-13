#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int dp[10001];

int main() {
	int t;
	cin >> t;
	
	int tmp;
	
	for(int i = 2 ; i <= 10000 ; i++){
		int j;
		bool isPrime = true;
		for(j = 2 ; j <= sqrt(i) ; j++) {
			if(i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if(isPrime) {
			dp[i] = i;
		}
	}
	
	
	while(t--) {
		scanf("%d",&tmp);
		int i;
		
		for(i = tmp/2 ; i >= 2 ; i--) {
			if(dp[i] > 0 && dp[tmp - i] > 0) {
				cout << i << " " << tmp - i << endl;
				break;
			}
		}
		
	}
	
	
}