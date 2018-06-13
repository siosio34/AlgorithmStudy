#include <iostream>
using namespace std;

int arr[100000];
int dp[100000][4];
int ans;

int max_num = 0;
int max_train = 0;
int n;

int solve(int i, int cnt) {
	
	if(i > n || cnt == 3) {
		return 0;
	}
	
	if(dp[i][cnt] != -1) {
		return dp[i][cnt];
	}
	
	dp[i][cnt] = max(solve(i+1,cnt), arr[i] + solve(i+max_train,cnt+1));
	return dp[i][cnt];
	
}

int main() {
	
	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		cin >> arr[i];
	}
	
	cin >> max_train;

	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1 ; j < max_train ; j++) {
			arr[i] += arr[i+j];
		}
	}
	
	for(int i = 0 ; i < 100000 ; i++) {
		for(int j = 0 ; j < 4  ; j++) {
			dp[i][j] = -1;
		}
	}

	cout << solve(1,0) << endl;
	
	
}