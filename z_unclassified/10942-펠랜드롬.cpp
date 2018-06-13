#include <iostream>
using namespace std;

int pelindromArr[2001];
int checkFlag[2001][2001];

int solve(int start, int end) {

	bool check = true;
	int i = start;
	int j = end;

	while (i <= j) {
		if (checkFlag[i][j] >= 0) { // 저장된값이있을때.
			cout << checkFlag[i][j] << endl;
			return checkFlag[i][j];
		}

		if (i == j) {
			checkFlag[start][end] = 1;
			return checkFlag[start][end];
		} 

		if (pelindromArr[i] != pelindromArr[j]) {
			// 틀린게나온경우
			checkFlag[start][end] = 0;
			return checkFlag[start][end];
		}

		else { 
			i++;
			j--;
		}
	}

}

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> pelindromArr[i];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			checkFlag[i][j] = -1;
		}
	}

	int questionNum;
	cin >> questionNum;

	int start, end;

	for (int i = 0; i < questionNum; i++) {
		cin >> start >> end;
		cout << solve(start, end) << endl;
	}


}