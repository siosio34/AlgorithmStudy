#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> a[1001];
bool checked[1001];

void dfs(int node) {
	checked[node] = true;
	cout << node << " ";
	for(int i =0 ; i < a[node].size() ; i++) {
		int next = a[node][i];
		if(checked[next] == false)
			dfs(next);
	}
}

void bfs(int start) {

	cout << endl;
	queue<int> q;
	memset(checked,false,sizeof(checked));
	
	q.push(start);
	checked[start] = true;
	
	while(!q.empty()) {
		int node = q.front();
		q.pop();
		cout << node << " ";
		for(int i =0 ; i < a[node].size() ; i++) {
			int next = a[node][i];
			if(checked[next] == false) {
				q.push(next);
				checked[next] = true;
			}
		}
	}
}

int main() {
	int n,m,v;
	int start, end;
	
	cin >> n >> m >> v;
	
	for(int i = 0 ; i < m ; i++) {
		cin >> start >> end;
		a[start].push_back(end);
		a[end].push_back(start);
	}
	
	for (int i=1; i<=n; i++) {
        sort(a[i].begin(), a[i].end());
    }
	
	dfs(v);
	bfs(v);

}