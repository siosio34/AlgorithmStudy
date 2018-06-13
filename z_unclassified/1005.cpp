#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;


int cost[1001];
int dp[1001];
int indegree[1001];
queue<int> searchQue;
vector<vector<int> > arr(1001);


int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n,k;
		scanf("%d %d",&n,&k);

		for(int i = 1 ; i <= n ; i++) {
			scanf("%d", &cost[i]);
			dp[i] = cost[i];
		}
		
		int start, finish;
		for(int i = 0 ; i < k ; i++) {
			scanf("%d %d",&start,&finish);
			arr[start].push_back(finish);
			indegree[finish]++;
		}
		
		int winNum;
		scanf("%d",&winNum);
		
		for(int i = 1 ; i <= n ; i++) {
			if(indegree[i] == 0) {
				searchQue.push(i);
			}
		}
		
		while(indegree[winNum]) {
			if(searchQue.size()) {
			int tmp = searchQue.front();
			for(int i = 0 ; i < arr[tmp].size() ; i++) {
				indegree[arr[tmp][i]]--;
				if(indegree[arr[tmp][i]] == 0) {
					searchQue.push(arr[tmp][i]);
				}
				dp[arr[tmp][i]] = max(dp[arr[tmp][i]], dp[tmp] + cost[arr[tmp][i]]);
			}
				searchQue.pop();
			}
		}
		printf("%d\n",  dp[winNum]);
		
		for(int i = 1 ; i <= n ; i++) {
			cost[i] = 0;
			dp[i] = 0;
			indegree[i] = 0;
			arr[i].clear();
		}
		while (searchQue.size()) searchQue.pop();
		
	}
	
	return 0;
}


// int solve(int winNum, int cost[], vector<vector<int> > arr, int dp[]) {
// 	if(dp[winNum] > 0) {
// 		return dp[winNum];
// 	}
	
// 	int result = 0;
// 	for(int i = 0 ; i < arr[winNum].size() ; i++) {
// 		result = max(result, solve(arr[winNum][i],cost,arr,dp));
// 	}

// 	return dp[winNum] = result + cost[winNum];
// }
