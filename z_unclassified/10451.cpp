#include <iostream>
using namespace std;

bool check[1001];
int arrayA[1001];

void dfs(int start) {
	if (check[start]) return;
	check[start] = true;
	dfs(arrayA[start]);
}
// 연결요소의 갯수를 구하면 이 문제를 해결
int main() {

	int num;
	cin >> num;

	int arrayANum;
	int answer;

	for (int i = 0; i < num; i++) {
		answer = 0;
		cin >> arrayANum;

		for (int i = 1; i <= arrayANum; i++) {
			cin >> arrayA[i];
			check[i] = false;
		}

		for (int i = 1; i <= arrayANum; i++) {
			if (check[i] == false) {
				dfs(i);
				answer++;
			}
		}
		cout << answer << endl;
	}
	return 0;

}