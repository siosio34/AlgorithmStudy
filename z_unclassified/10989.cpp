#include <iostream>
#include <cstdio>
using namespace std;


int dp[10001];

int main() {
	int t;
	cin >> t;
	
	int tmp;
	for(int i = 0 ; i <t ; i++) {
		scanf("%d",&tmp);
		dp[tmp]++;
	}
	
	for(int i = 1 ; i < 10001 ; i++) {
		while(dp[i]--) {
			printf("%d\n",i);
		}
	}
	
	
}