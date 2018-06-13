#include <iostream>
#include <vector>
using namespace std;

int check[100001];
int studentNumber[100001]; // 시작점.
int s[100001];

int dfs(int x, int start, int cnt) {

	if (check[x] != 0) {
		if (start != s[x]) {
			return 0;
		}
		return cnt - check[x];
	}
	check[x] = cnt;
	s[x] = start;
	int next = studentNumber[x];
	return dfs(next, start, cnt + 1);
}

int main() {

	int T;
	cin >> T;

	int num;
	
	// 한점에서 시작해서 한점으로 다시 돌아오는지
	// but 이전 출발한 점이랑 같으면안됨.

	for (int i = 0; i < T; i++) {
		cin >> num; // 학생들의 숫자.

		for (int j = 1; j <= num; j++) {
			check[j] = 0;	
			cin >> studentNumber[j];
		}

		int ans = 0;
		for (int j = 1; j <= num; j++) {
			if (check[j] == 0) {
 				ans += dfs(j, j, 1);
			}	
		}
		cout << (num - ans) << endl;	
	}

}