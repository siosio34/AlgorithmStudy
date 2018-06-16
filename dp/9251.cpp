#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long dp[1002][1002];

int main() {
	string a,b;
	cin >> a >> b;
	
	int aLen = a.size();
	int bLen = b.size();
	
	for(int i = 0 ; i < aLen ; i++) {
		for(int j = 0 ; j < bLen ; j++){
			if(a[i] == b[j]) {
				dp[i+1][j+1] = dp[i][j] + 1;
			} else {
				dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
			}
		}
	}
	cout << dp[aLen][bLen] ;

}