#include <iostream>
#include <vector>
using namespace std;

vector<long long int> ans;

long long int dp[70];

long long int solve(int num) {
	
	if(dp[num] > 0)
		return dp[num];
	
	if(num < 2) return dp[num] = 1;
	else if(num == 2) return dp[num] = 2;
	else if(num == 3) return dp[num] = 4;
	else return dp[num] = solve(num-1) + solve(num-2) + solve(num-3) + solve(num-4);
		
}

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int num;
		cin >> num;
		ans.push_back(solve(num));
	}
	
	for(int i = 0 ; i < ans.size() ; i++) {
		cout << ans[i] << endl;
	}
}