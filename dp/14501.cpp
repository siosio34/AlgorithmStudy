#include <iostream>
#include <algorithm>
using namespace std;

int days[16];
int cost[16];
int dp[16];
int n;
int solve(int _day, int _cost) {
	
	if(_day > n + 1)
		return 0;
	
	if(_day == n + 1) {
		return _cost;
	}	
	
	return max(solve(_day + days[_day],_cost + cost[_day]), solve(_day + 1, _cost));
}

int main() {
	cin >> n;
	
	for(int i = 1; i <= n ; i++) {
		cin >> days[i];
		cin >> cost[i];
	}
	
	cout << solve(1,0);
	
}