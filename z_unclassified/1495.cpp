#include <iostream>
using namespace std;

int arr[101];
bool dp[101][1001] = {false};

int main() {
    int n,start,max;
    
    cin >> n >> start >> max;
    
    for(int i =1 ; i<= n ; i++) {
        cin >> arr[i];
    }
	

	if(start + arr[1] <= max)
		dp[1][start+arr[1]] = true;
	if(start - arr[1] >= 0)
		dp[1][start-arr[1]] = true;
	
// 	dp[1][1] = true;
// 	dp[1][100]
    
    for(int i =2 ; i <= n ; i++) {
        for(int j=0 ; j <= max ; j++) { 
            if(dp[i-1][j]) {
              if(arr[i] + j <= max) {
                dp[i][arr[i] + j] =true;
              }
              if(j - arr[i] >= 0) {
                dp[i][j - arr[i]] = true;
              }
            }
   
        }
    }
    
    for(int i = max ; i >= 0 ; i--) {
        if(dp[n][i]) {
			cout << i;
			return 0;
		}
    }
    cout << -1 << endl;
    
}