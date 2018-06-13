#include <iostream>
#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int w[16][16];
int dp[16][1 << 16];

int MAX_VALUE = 1000000000;
int start;
int num;

int tsp(int current,int visited) {
	
	if(visited == (1<<num)-1)
		return w[current][start] ? w[current][start] : MAX_VALUE;
	
	int &ret = dp[current][visited];
	if(ret != -1)
		return ret;
	
	ret = MAX_VALUE;
	
	for(int i=0 ; i<num ; i++) {
		if(visited & (1<<i))
			continue ;
		if(w[current][i] == 0)
			continue ;
		ret = min(ret, tsp(i, visited | (1<<i)) + w[current][i]);
	}
	return ret;
}


int main() {
	cin >> num;
	for(int i = 0 ; i< num ; i++) {
		for(int j = 0 ; j<num ; j++) {
			cin >> w[i][j];
		}
	}
	for(int i = 0 ; i< num ; i++) {
		for(int j = 0 ; j< (1 << 16)  ; j++) {
			dp[i][j] = -1;
		}
	}
	
	cout << tsp(0,1) << endl;
}