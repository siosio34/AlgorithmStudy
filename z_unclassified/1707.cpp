#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> answer;
int check[20001];
vector<int> a[20001];


bool dfs(int x, int c) {
	check[x] = c;
	for (int i = 0; i < a[x].size(); i++) {
		int next = a[x][i];
		if (check[next] == 0) { // 처음 오는곳인데
			if (dfs(next, 3 - c) == false) {
				return false;
			}
		}
		else if (check[next] == check[x]) { // 앞으로 갈곳이랑 현재 노드랑 같은 집합이면
			return false;
		}
	}
	return true;
}

int main() {
	int K;
	cin >> K;

	for (int i = 0; i < K; i++) {
		int V, E;
		int tempA, tempB;
		bool ok = true;

		cin >> V >> E;

		for (int i = 1; i <= V; i++) {
			a[i].clear();
			check[i] = 0;
		}

		for (int j = 0; j < E; j++) {
			cin >> tempA >> tempB;
			a[tempA].push_back(tempB) ;
			a[tempB].push_back(tempA);
		}

		for (int i = 1; i <= V; i++) {
			if (check[i] == 0) {
				if (dfs(i, 1) == false) {
					ok = false;
				}
			}
		}
		answer.push_back(ok ? "YES" : "NO");
	}

	for (int i = 0; i < K; i++) {
		cout << answer[i] << endl;
	}


	return 0;

}