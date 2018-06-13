#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

// DFS �� STACK ���� �̷���� �ִ�
// BFS �� QUEUE �� �̷�����ִ�.
int N, M, start;
bool check[1001];
bool check2[1001];
vector<int> node[1001];


void dfs(int x) {
	cout << x << " ";
	check[x] = true;
	for (int i = 0; i < node[x].size(); i++) {
			int next = node[x][i];
			if (!check[next]) {
				dfs(next);
			}
	}
}

void bfs(int x) {

	queue<int> bfsqueue;
	check2[x] = true;
	bfsqueue.push(x);

	while (!bfsqueue.empty()) {
		int temp = bfsqueue.front();
		cout << temp << " ";
		bfsqueue.pop();
		for (int i = 0; i < node[temp].size(); i++) {
			int next = node[temp][i];
			if (!check2[next]) {
				check2[next] = true;
				bfsqueue.push(next);
			}				
		}
	}
}

int main() {
	
	cin >> N >> M >> start;
	
	int tempA, tempB;
	for (int i = 0; i < M; i++) {
		cin >> tempA >> tempB;
		node[tempA].push_back(tempB);
		node[tempB].push_back(tempA);
	}

	for (int i = 1; i <= N; i++) {
		// �������� ��� ������ȣ�� �����ź��� �鸥��.
		sort(node[i].begin(), node[i].end());
	}
 
	dfs(start);
	cout << endl;
	bfs(start);
	
	
	return 0;
	//bfs(start);
}