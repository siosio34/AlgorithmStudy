#include <iostream>
#include <stdio.h>
using namespace std;

int pelindromArr[2501];
bool checkFlag[2501][2501];
int n;
int questionNum;

void solve() {

	for (int i = 1; i <= n; i++) {
		checkFlag[i][i] = 1;
	}
	for (int i = 1; i <= n - 1; i++) {
		if (pelindromArr[i] == pelindromArr[i + 1])
			checkFlag[i][i + 1] = 1;

	}

	for (int k = 2; k < n; k++) { // 길이가 3부터 n까지
		for (int i = 1; i <= n - k; i++) {
			int j = i + k;
			if (pelindromArr[i] == pelindromArr[j] && checkFlag[i + 1][j - 1])
				checkFlag[i][j] = 1;
		}
	}
}

int main() {

	solve();

}