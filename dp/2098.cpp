#include <iostream>
#include <algorithm>
using namespace std;

int check[17];
int w[17][17];
int dp[17][17];

int start;
int n;

int solve(int current,int cityNum) {
	
	check[current] = true;
	if(cityNum == n) {
		check[current] = false;
		return w[current][start];
	}
		
	
	int &ret = dp[current][visited];
	if(ret > 0)
		return ret;
	
	for(int i = 1 ; i <= n ; i++) {
		if(check[i] == false) {
			check[i] = true;
		}
	}
	
}
int main() {

	cin >> n;
	
	for(int i = 1 ; i <= n ; i++) {
		for(int j = 1; j <= n ; j++) {
			cin >> w[i][j];
		}
	}
	
	int lowNum = 0;
	
	for(int i = 1 ; i <= n ; i++) {
		start = i;
		lowNum = min(lowNum, solve(i,1));
	}
	
	cout << lowNum;
	
}