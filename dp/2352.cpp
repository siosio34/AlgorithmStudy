#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int a[40001];
int dp[40001];
int main() {
	int n;
	cin >> n;
	
	for(int i = 0 ; i < n ; i++) {
		scanf("%d",&a[i]);
	}
	
	int maxNum = 1;
		
	for(int i = 0 ; i < n ; i++) {
		dp[i] = 1;
		for(int j = 0 ; j < i ; j++) {
			if(a[i] > a[j] && dp[j] + 1 > dp[i]) {
				dp[i] = dp[j] + 1;
			}
		}
		maxNum = max(maxNum,dp[i]);

	}
	cout << maxNum;
}

// #include<stdio.h>
// #include<algorithm>
// using namespace std;
// int n, a[100000], sz;
// int main() {
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//         scanf("%d", &a[i]);
//     for (int i = 0; i < n; i++) {
//         int p = upper_bound(a, a + sz, a[i]) - a;
//         if (p == sz) sz++;
//         a[p] = a[i];
//     }
//     printf("%d", sz);
//     return 0;
// }