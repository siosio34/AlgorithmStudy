#include <iostream>
using namespace std;

void combi(int*set, int*arr, int setsize, int arrsize, int C, int result[][10], int& count) {
	if (arrsize == 0) {
		for (int i = 0; i < C; i++)
			result[count][i] = arr[i];
		count++;
		return;
	}
	if (setsize<arrsize)
		return;
	else {
		arr[arrsize - 1] = set[setsize - 1];
		combi(set, arr, setsize - 1, arrsize - 1, C, result, count);
		combi(set, arr, setsize - 1, arrsize, C, result, count);
	}
}

int main() {
	int N, M;
	cin >> N >> M;

	int arr[10];
	int evenNum[10];
	int evenNumNum = 0;
	int oddNum[10];
	int oddNumNum = 0;
	for (int i = 0; i < M; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 0) {
			evenNum[evenNumNum] = arr[i];
			evenNumNum++;
		}
		else {
			oddNum[oddNumNum] = arr[i];
			oddNumNum++;
		}
	}

	if (evenNumNum == 0 || oddNumNum == 0)
		return 0;

	int check = N;
	int evenChooseCount = 0;
	int oddChooseCount = 0;
	int evenResult[10][10];
	int oddResult[10][10];
	int evenChoose[10];
	int oddChoose[10];
	int result[10];

	int allResult = 0;
	do {
		int count = 0;
		if (check <= evenNumNum)
			combi(evenNum, evenChoose, evenNumNum, check, check, evenResult, count);
		evenChooseCount = count;

		count = 0;
		if (N - check <= oddNumNum)
			combi(oddNum, oddChoose, oddNumNum, N - check, N - check, oddResult, count);
		oddChooseCount = count;

		if (N - check != 0) {
			allResult += evenChooseCount*oddChooseCount;
		}

	} while (--check);
	cout << allResult << endl;
}