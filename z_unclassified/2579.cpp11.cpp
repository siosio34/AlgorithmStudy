#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int dp[305][3];
int a[305];

int bbb(int now, int jump)
{
	if (now == 0 || dp[now][jump] != 0)
		return dp[now][jump];

	if (jump == 1)
		return dp[now][jump] = bbb(now - 1, 2) + a[now];

	return dp[now][jump] = max(bbb(now - 2, 1), bbb(now - 2, 2)) + a[now];

}
int main()
{
	
	int k;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> k;
		a[i] = k;
	}

	dp[1][1] = dp[1][2] = a[1];
	cout << max(bbb(n, 1), bbb(n, 2)) << endl;

}