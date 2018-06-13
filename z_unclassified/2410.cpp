#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int k;
int dp[1000001];
vector<int> twoPows;

int main() {

	cin >> k;
	
	int i = 1;
	while(i <= k) {
		twoPows.push_back(i);
		i *= 2;
	}

	dp[0] = 1;
	
	for(int i = 0 ; i < twoPows.size() ; i++) {
		for(int j = twoPows[i] ; j <= k ; j++) {    
			
			dp[j] += dp[j - twoPows[i]];
			dp[j] %= 1000000000;
		}
	}
	cout << dp[k] << endl;
	
// 	cout << dp[k] << endl;
}