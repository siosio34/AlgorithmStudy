#include <iostream>
#include <cstring>
using namespace std;

int a[1001];
int dp[1001][31][3];

int t,w;

int solve(int nowTime,int nowCnt,int nowPos) {
	
	if(nowTime > t)
		return 0;
	
	int &ret = dp[nowTime][nowCnt][nowPos];
	if(ret != -1) {
		return ret;
	}
	
	if(nowPos == a[nowTime]) {
		ret = solve(nowTime + 1, nowCnt, nowPos) + 1;
		if(nowCnt < w) {
			if(nowPos == 1)
				nowPos = 2;
			else
				nowPos = 1;
			ret = max(ret, solve(nowTime + 1,nowCnt+1,nowPos));
		} 
	}
	else {
		ret = solve(nowTime + 1, nowCnt, nowPos);
		if(nowCnt < w) {
			if(nowPos == 1)
				nowPos = 2;
			else
				nowPos = 1;
			
			ret = max(ret, solve(nowTime + 1,nowCnt+1,nowPos) + 1);
		} 
	}
	return ret;
	
}

int main() {

	cin >> t >> w;
	
	for(int i = 1 ; i <= t ; i++) {
		cin >> a[i];
	}
	memset(dp,-1,sizeof(dp));
	cout << solve(1,0,1);
}
