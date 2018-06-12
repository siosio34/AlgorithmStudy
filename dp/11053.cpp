#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001];
int dp[1001];

int main() {
	
	int n;
	int maxNum = 0;
	
	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	
	for(int i = 0 ; i < n ; i++) {
		dp[i] = 1;
		for(int j = 0 ; j < i ; j++) {
			if(arr[j] < arr[i]) {
				if(dp[i] < dp[j] + 1) {
					dp[i] = dp[j] + 1;
				}
			}
		}
		maxNum = max(maxNum, dp[i]);
	}
	
	cout << maxNum << endl;	
}