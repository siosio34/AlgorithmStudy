#include <iostream>
#include <vector>
using namespace std;

int check[100001];
int studentNumber[100001]; // ������.
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
	
	// �������� �����ؼ� �������� �ٽ� ���ƿ�����
	// but ���� ����� ���̶� ������ȵ�.

	for (int i = 0; i < T; i++) {
		cin >> num; // �л����� ����.

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