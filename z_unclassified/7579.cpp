#include <iostream>
using namespace std;

int useMemory[101];
int unusedCost[101];
int dp[10001];

int ans = 10000001;



int main() {
	int appNum;
	cin >> appNum;
	
	int cost;
	cin >> cost;
	
	for(int i = 1 ; i <= appNum ; i++) {
		cin >> useMemory[i];
	}
	for(int i = 1 ; i <= appNum ; i++) {
		cin >> unusedCost[i];
	}
	
	for(int i=1;i<=appNum;i++){ 
		for(int j=10001; j>=unusedCost[i];j--){
			dp[j] = max(dp[j], dp[j-unusedCost[i]] + useMemory[i]);
		}
	}

	for(int i = 1 ; i <= 10000 ; i++) {
		if(dp[i] >= cost) {
			cout << i;
			return 0;
		}
	}
	
}