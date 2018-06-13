
#include <iostream>
#include <vector>
#pragma warning (disable:4996)
using namespace std;

#define MAX 4
vector< vector< int > >  dp; // 2차원 벡터(배열)
int src;
int cities2[MAX][MAX] = { {0,2,1,5},{ 999,0,2,4},{2,3,0,999 },{7,1,10,0} };
 // 999 는 연결되어 있지않은것

void init() { // 현재 상태 초기화
	for (int i = 0; i < MAX; ++i)
		dp[1 << i][i] = cities2[src][i];
}

// TSP
int TSP(int status, int x) {

	if (dp[status][x] != -1) // 한번이라도 계산한 값이라면
		return dp[status][x]; // 그 값을 리턴한다.

	int mask = 1 << x; //mask 는 1,2,4,8 늘어난다. 
	dp[status][x] = INT_MAX;
	for (int i = 0; i < MAX; ++i) {
		if (i != x && (status & (1 << i))) {
			int temp = TSP(status - mask, i) + cities2[i][x];
			if (dp[status][x] > temp) {
				dp[status][x] = temp;

			}
		}

	}
	return dp[status][x];
}

int main() {

	dp = vector< vector< int > >(1 << MAX, vector< int >(MAX, -1)); // 2차원 벡터(배열)

	init();
	cout << "문제에 주어진 최적의 경로의 길이는 : " << TSP((1 << MAX) - 1, 0);

	cout << endl;
	cout << endl;

	return 0;
}