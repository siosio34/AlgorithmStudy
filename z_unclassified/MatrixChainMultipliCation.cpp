#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 4 // 최댓값지정, 변화시킬수 있음.
int P[MAX + 1][MAX + 1]; // 곱셈 순서를 출력하기 위한 배열
int d[MAX + 1]; // 배열의 행과 열의 수치를 저장하기 위한 배열

// 1부터 세기 위해 배열칸을 하나씩 더 늘림
int MatrixMultipleUtil() { // 곱셈 횟수를 출력하기 위한 배열
	int i, j, k, diagonal;

	int minInt = INT_MAX; // int의 최댓값
	int M[MAX + 1][MAX + 1]; // dp를 위해 만들어놓은 배열

	for (int i = 1; i <= MAX; i++) // 초기화
		M[i][i] = 0;

	for (diagonal = 1; diagonal <= MAX - 1; diagonal++) {

		for (i = 1; i <= MAX - diagonal; i++) {
			minInt = INT_MAX; // 최댓값 초기화
			j = i + diagonal;
			for (k = i; k <= j - 1; k++) {
				int temp = (M[i][k] + M[k + 1][j] + d[i - 1] * d[k] * d[j]);
				if (temp < minInt) { // 받아온 값이 최솟값이면
					minInt = temp; // 새로운 최솟값 갱신
					P[i][j] = k; // 곱셈 경로 갱신
				}
			}
			M[i][j] = minInt;

		}
	}
	return M[1][MAX];
}

void MultipleOrder(int i, int j) { // 곱셈 순서를 출력하기 위한 배열
	int k;
	if (i == j) cout << "A" << i;
	else {
		k = P[i][j];
		cout << "(";
		MultipleOrder(i, k);
		MultipleOrder(k + 1, j);
		cout << ")";
	}

}
int main() {

	int temp1, temp2;

	cout << "행렬을 입력하세요 (n m)" << endl;
	for (int i = 0; i < MAX; i++) {
		cin >> temp1 >> temp2;

		if (i == 0) { // 첫 배열은 저장하는데 첫번째 행렬의 행과 열 둘다 필요
			d[0] = temp1; 
			d[1] = temp2;
		}
		else {
			d[i + 1] = temp2; // 나머진 열만 필요
		}

	}

	cout << endl << "최소곱셈횟수 : " << MatrixMultipleUtil() << endl;
	cout << endl << "곱셈 순서 : ";
	MultipleOrder(1, MAX);

}