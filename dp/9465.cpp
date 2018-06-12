#include <iostream>
#include <algorithm>
using namespace std;

int dp[100001][2];
int sticker[100001][2];

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		
		for(int i = 0 ; i < 100001 ; i++) {
			for(int j = 0 ; j < 2 ; j++) {
				sticker[i][j] = 0;
				dp[i][j] = 0;
			}
		}
		
		for(int i = 0 ; i < 2;  i++) {
			for(int j = 0 ; j < n ; j++) {
				cin >> sticker[j][i];
			}
		}
		
		dp[0][0]=sticker[0][0];
        dp[0][1]=sticker[0][1];
        dp[1][0]=sticker[1][0]+sticker[0][1];
        dp[1][1]=sticker[1][1]+sticker[0][0];
		
		int maxScore = 0;
		for(int i=2;i<n;++i){
            dp[i][0]=max(dp[i-2][0],max(dp[i-2][1],dp[i-1][1]))+sticker[i][0];
            dp[i][1]=max(dp[i-2][1],max(dp[i-2][0],dp[i-1][0]))+sticker[i][1];
        }
		cout << max(dp[n-1][0],dp[n-1][1]) << endl;
		
	}
}