#include <iostream>
#include <algorithm>
using namespace std;

int n;
int w[17][17];
int dp[17][1 << 16 + 1];

int MAX_VALUE = 987654321;

int solve(int current,int visited) {
	
	if(visited == (1 << n) - 1) {
		return w[current][0];
	}
	
	int &ret = dp[current][visited];
	
	if(ret != 0) return ret;
	ret = MAX_VALUE;
	
	for(int i = 0 ; i <= n ; i++) {
		if(visited & (1 << i) || w[current][i] == 0)
			continue;
		ret = min(ret, solve(i, visited | (1 << i)) + w[current][i]);
		
	}
	return ret;
}
int main() {

	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0; j < n ; j++) {
			cin >> w[i][j];
		}
	}
	
	cout << solve(0, 1) << endl;
}