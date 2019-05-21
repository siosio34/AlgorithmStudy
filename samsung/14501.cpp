#include <iostream>
#include <algorithm>
using namespace std;

int t[16];
int pay[16];

int dp[16];

int memorize[16];

int n;
int ans;

void dfs(int day, int cPay) {
	if(day == n + 1){
		ans = max(ans, cPay);
		return ;
	}
	
	dfs(day + 1, cPay);
	
	if(day + t[day] - 1 <= n) {
		dfs(day+t[day], cPay + pay[day]);
	}
}




int main() {

	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		cin >> t[i] >> pay[i];
		dp[i] = pay[i];
	}
	
	// dfs(1,0);
	// cout << ans;	
	
}