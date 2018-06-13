#include <iostream>
#include <queue>
using namespace std;

int from[] = { 0, 0, 1, 1, 2, 2 };
int to[] = { 1, 2, 0, 2, 0, 1 };
bool ans[201];

int main() {
	int cap[3];
	for (int i = 0; i < 3; i++)
		cin >> cap[i];

	int maxNum = cap[2];

	bool check[201][201] = { false };
	queue<pair<int, int> > q;
	q.push(make_pair(0, 0));
	ans[maxNum] = true;

	while (!q.empty()) {
		int cur[3];
		cur[0] = q.front().first;
		cur[1] = q.front().second;
		cur[2] = maxNum - cur[0] - cur[1];
		q.pop();

		for (int k = 0; k < 6; k++) {
			int next[3] = { cur[0],cur[1],cur[2] };
			next[to[k]] += next[from[k]];
			next[from[k]] = 0;

			if (next[to[k]] >= cap[to[k]]) {
				next[from[k]] = next[to[k]] - cap[to[k]];
				next[to[k]] = cap[to[k]];
			}

			if (!check[next[0]][next[1]]) {
				check[next[0]][next[1]] = true;
				q.push(make_pair(next[0], next[1]));
				if (next[0] == 0) {
					ans[next[2]] = true;
				}
			}

		}
	}
	for (int i = 0; i <= cap[2]; i++) {
		if (ans[i]) {
			cout << i << ' ';
		}
	}
	cout << '\n';


	


}