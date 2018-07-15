#include <iostream>
#include <vector>

using namespace std;

vector<int> a[1001];
bool checked[1001];

void dfs(int node) {
	checked[node] = true;

	for(int i =0 ; i < a[node].size() ; i++) {
		int next = a[node][i];
		if(checked[next] == false)
			dfs(next);
	}
}

int main() {
	int n,m;
	
	cin >> n >> m;
	int u,v;
	
	for(int i = 0 ; i < m ; i++) {
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	
	int connector = 0;
	for(int i = 1 ; i <= n ; i++) {
		if(checked[i] == false) {
			dfs(i);
			connector++;
		}
	}
	cout << connector << endl;
	
	
}