#include <iostream>
using namespace std;

long long dp[101][1001];
int a[101];

int ans;
int num;

long long solve(int sum, int cnt) {
	
	if(sum < 0 || sum > 20 )
		return 0;
	
	if(cnt == num-1) {
		return dp[cnt][sum] = (sum == ans ? 1 : 0);
	}
    
    if(dp[cnt][sum] != -1)
		return dp[cnt][sum];
	
	dp[cnt][sum] = solve(sum +a[cnt+1] ,cnt+1) + solve(sum-a[cnt+1], cnt+1);
	
	return dp[cnt][sum];
	
}

int main() {

	cin >> num;

	for(int i= 1; i <= num ; i++) {
		cin >> a[i];
	}
	
	for (int i = 0; i < 101; i++)
        for (int j = 0; j < 1001; j++)
            dp[i][j] = -1;

	ans = a[num];
	cout << solve(a[1],1) << endl;

}

