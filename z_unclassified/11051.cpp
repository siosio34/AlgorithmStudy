#include <iostream>
using namespace std;

long long int n,k;
long long dp[1001][1001];

int main() {
    cin >> n >> k;
    
    for(int i= 1 ; i<= n ; i++) {
        dp[i][1] = i;
		dp[i][0] = 1;
        dp[i][i] = 1;
    }

    for(int i=2; i<=n; i++) {
        for(int j=1 ; j<=k ; j++) {
             if(i>j){
                dp[i][j] = dp[i-1][j-1]  + dp[i-1][j];
                dp[i][j] = dp[i][j] % 10007;
				// dp[2][1] = do[1][0] + dp[1][1];
				// dp[2][2] = dp[1][1] + dp[1][2]
				// dp[3][2] = dp[2][1] + dp[2][2]; 3
				// dp[4][2] = dp[3][1] + dp[3][2] 3+ 3
				// dp[5][2] = dp[4][1] + dp[4][2]; 4+6
				// cout << i << " "<< j << " " << dp[i][j] << endl;
            }
            
        }
    }
    cout << dp[n][k] << endl;
}