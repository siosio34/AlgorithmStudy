#include <iostream>
using namespace std;

int arr[40001];
int dp[40001];

int ans ;
int main() {
	
	int n;
	cin >> n;
	
	for(int i = 1 ;i <= n ; i++) {
		cin >> arr[i];
	}
	
	dp[1] = arr[1];
	ans = 1;
	
	int pos;
	
	for(int i =2 ; i <= n ; i++) {
		if(dp[ans] < arr[i]) {
			ans++;
			dp[ans] = arr[i];
			continue;
		}
		pos = lower_bound(dp+1,dp+ans+1,arr[i]) - dp;
		dp[pos] = arr[i];
		
	}
	cout << ans << endl;
	
}