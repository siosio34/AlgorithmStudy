#include <iostream>
#include <queue>

using namespace std;

int n, k;
queue<int> cur;
int ans;
bool check[100001];
int dist[100001];


void go() {

	check[n] = true;
	dist[n] = 0;
	cur.push(n);

	while (!cur.empty()) {

		int top = cur.front();
		cur.pop();

		if (top == k)
			cout << dist[top];

		if (top - 1 >= 0) {
			if (!check[top - 1]) {
				dist[top - 1] = dist[top] + 1;
				check[top - 1] = true;
				cur.push(top - 1);
			}
		}

		if (top + 1 <= 100000) {
			if (!check[top + 1]) {
				dist[top + 1] = dist[top] + 1;
				check[top + 1] = true;
				cur.push(top + 1);
			}
		}

		if (top * 2 <= 100000) {
			if (!check[top * 2]) {
				dist[top * 2] = dist[top] + 1;
				check[top * 2] = true;
				cur.push(top * 2);
			}
		}
	}


}

int main() {

	cin >> n >> k;
	go();
	
	
}