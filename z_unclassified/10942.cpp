#include <iostream>
#include <stdio.h>
using namespace std;

int pelindromArr[2001];
bool checkFlag[2001][2001];
int n;
int questionNum;

void solve() {

	for (int i = 1; i <= n; i++) {
		checkFlag[i][i] = 1;
	}
	for (int i = 1; i <= n-1; i++) {
		if (pelindromArr[i] == pelindromArr[i+1])
			checkFlag[i][i+1] = 1;
	}

	for (int k = 3; k <= n; k++) { // 길이가 3부터 n까지
		for (int i = 1; i <= n - k + 1; i++) {
			int j = i + k - 1;
			if (pelindromArr[i] == pelindromArr[j] && checkFlag[i + 1][j - 1])
				checkFlag[i][j] = 1;
		}
	}
}

int main() {

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> pelindromArr[i];
	}

	solve();
	cin >> questionNum;

	int start, end;

	for (int i = 0; i < questionNum; i++) {
		scanf("%d %d", &start, &end);
		printf("%d\n",checkFlag[start][end]);
	}
}