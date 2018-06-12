#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<long long> squarePower;

long long dp[100001];

int main() {
	int n;
	cin >> n;
	
	for(int i = 1 ; i * i <= n ; i++) {
		squarePower.push_back(i*i);
		dp[i*i] = 1;
	}
	
	for(int i= 0 ; i< squarePower.size() ; i++) {
		for(int j = 1 ; j <= n ; j++) {
			if(j >= squarePower[i]) {
				if(dp[j] > 0) {
					dp[j] = min(dp[j-squarePower[i]] + 1, dp[j]);
				} else {
					dp[j] = dp[j-squarePower[i]] + 1;
				}
				
			}
		}
	}
	
	
	cout << dp[n] << endl;
}