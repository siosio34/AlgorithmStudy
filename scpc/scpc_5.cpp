#include <iostream>
#include <algorithm>
#include <cmath>
#include <stdlib.h>
#include <vector>
#include <cstring>
using namespace std;

int a[1000001];
int aSum[1000001];
int sqrtAsum[1000001];
float dp[5001][5001];
int n;


float calculateMinError(int start, int end) {
    int sum = aSum[end] - (start == 0 ? 0 : aSum[start-1]);
    int sqrtSum = sqrtAsum[end] - (start == 0 ? 0 : sqrtAsum[start-1]);
    
    float average = (float) sum / (end-start+1);
	float ret = (float) sqrtSum - 2 * average * sum + average * average * (end-start+1);
		
    return ret;
}

float solve(int from, int parts) {
    if(from == n) { 
        return 0;
    }
    if(parts == 0) {
        return 987654321;
    }
    float &ret = dp[from][parts];
    if(ret != -1) {
        return ret;
    }
    ret = 987654321;
    for(int partSize = 1; from + partSize <= n ; ++partSize) {
		// 이번것까지 평균내는거
		// 다음거 포함해서 평균내는거
		// 정해지는 높이가 오름차순이어야됨, 양자화 갯수가 정해져있지않음.
		// 최대 증가 부분 수열 찾구

		if(a[from + partSize] > a[from+partSize -1] )
        ret = min(ret, calculateMinError(from,from + partSize -1) + solve(from + partSize,parts-1));
		// cout << ret << endl;
		
    }
    return ret;
}

int main(int argc, char** argv)
{
	int T, test_case;
	
	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{
        cin >> n;
        memset(a,0,sizeof(a));
        memset(aSum,0,sizeof(aSum));
        memset(sqrtAsum,0,sizeof(sqrtAsum));
        for(int i = 0 ; i < 5001 ;i++) {
			for(int j = 0 ; j < 5001 ; j++) {
				dp[i][j] = -1;
			}
		}
        
        for(int i = 0 ; i < n ; i++) {
            cin >> a[i];
        }

        aSum[0] = a[0];
        sqrtAsum[0] = a[0] * a[0];
        for(int i = 1 ; i < n ;i++) {
            aSum[i] = aSum[i-1] + a[i];
            sqrtAsum[i] = sqrtAsum[i-1] + a[i] * a[i];
        }
		
		cout << "Case #" << test_case+1 << endl;
		cout << solve(0,n);
	}

	return 0;
}