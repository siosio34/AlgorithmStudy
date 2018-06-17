#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int dp[4001][4001];

int main() {
	string a,b;
	cin >> a >> b;
	
	int maxNum = 0;
	
	int aLen = a.size();
	int bLen = b.size();
	
	for(int i = 0 ; i < aLen ; i++) {
		for(int j = 0 ; j < bLen; j++) {
			if(a[i] == b[j]) {
				dp[i+1][j+1] = dp[i][j] + 1;
				maxNum = max(maxNum,dp[i+1][j+1]);
			}
		}
	}
	cout << maxNum;
}