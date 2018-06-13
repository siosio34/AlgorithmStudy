#include <iostream>
#include <vector>
using namespace std;

bool check[1001];
vector<int> a[1001];

void dfs(int x) {
	check[x] = true;
	for (int i = 0; i < a[x].size(); i++) {
		int next = a[x][i];
		if (!check[next]) {		
			dfs(next);
		}
	}
}

int main() {

	int N, M;
	cin >> N >> M;
	
	int tempA, tempB;
	int connectionComponets = 0;

	for (int i = 0; i < M; i++) {
		cin >> tempA >> tempB;
		a[tempA].push_back(tempB);
		a[tempB].push_back(tempA);
	}

	for (int i = 1; i <= N; i++) {
		if (!check[i]) {
			dfs(i);
			connectionComponets += 1;
		}
	}

	cout << connectionComponets;
	system("pause");
}