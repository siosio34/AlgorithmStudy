#include <iostream>
using namespace std;

int arr[1001];
int dp[1001];

int main() {
	int n;
	cin >> n ;
	
	for(int i = 0 ; i < n ; i++) {
		cin >> arr[i];
		dp[i] = arr[i];
	}
	
	for(int i = 0 ; i < n ; i++) {
		for(int j = 0 ; j < i ; j++) {
			if(arr[j] < arr[i]) {
				if(dp[i] < dp[j] + arr[i]) {
					dp[i] = dp[j] + arr[i];
				}
			}
		}
	}
	
	int maxNum = 0;
	for(int i = 0 ; i < n ; i++) {
		maxNum = max(dp[i], maxNum);
	}
	cout << maxNum;
	
	
}