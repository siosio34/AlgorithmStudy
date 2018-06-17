#include <iostream>
using namespace std;

int dp[8][10];

int main() {
	int n;
	cin >> n;
	
	// 다시 풀기
	// 길이랑 시작 숫자 찾은다음에 dfs 를 한다.
	
	int sum = 0;
	dp[1][0] = 0;
	for(int i = 1 ; i <= 9 ; i++) {
		dp[1][i] = i;

	}
	
	
}