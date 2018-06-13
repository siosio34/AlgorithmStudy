#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 4 // �ִ�����, ��ȭ��ų�� ����.
int P[MAX + 1][MAX + 1]; // ���� ������ ����ϱ� ���� �迭
int d[MAX + 1]; // �迭�� ��� ���� ��ġ�� �����ϱ� ���� �迭

// 1���� ���� ���� �迭ĭ�� �ϳ��� �� �ø�
int MatrixMultipleUtil() { // ���� Ƚ���� ����ϱ� ���� �迭
	int i, j, k, diagonal;

	int minInt = INT_MAX; // int�� �ִ�
	int M[MAX + 1][MAX + 1]; // dp�� ���� �������� �迭

	for (int i = 1; i <= MAX; i++) // �ʱ�ȭ
		M[i][i] = 0;

	for (diagonal = 1; diagonal <= MAX - 1; diagonal++) {

		for (i = 1; i <= MAX - diagonal; i++) {
			minInt = INT_MAX; // �ִ� �ʱ�ȭ
			j = i + diagonal;
			for (k = i; k <= j - 1; k++) {
				int temp = (M[i][k] + M[k + 1][j] + d[i - 1] * d[k] * d[j]);
				if (temp < minInt) { // �޾ƿ� ���� �ּڰ��̸�
					minInt = temp; // ���ο� �ּڰ� ����
					P[i][j] = k; // ���� ��� ����
				}
			}
			M[i][j] = minInt;

		}
	}
	return M[1][MAX];
}

void MultipleOrder(int i, int j) { // ���� ������ ����ϱ� ���� �迭
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

	cout << "����� �Է��ϼ��� (n m)" << endl;
	for (int i = 0; i < MAX; i++) {
		cin >> temp1 >> temp2;

		if (i == 0) { // ù �迭�� �����ϴµ� ù��° ����� ��� �� �Ѵ� �ʿ�
			d[0] = temp1; 
			d[1] = temp2;
		}
		else {
			d[i + 1] = temp2; // ������ ���� �ʿ�
		}

	}

	cout << endl << "�ּҰ���Ƚ�� : " << MatrixMultipleUtil() << endl;
	cout << endl << "���� ���� : ";
	MultipleOrder(1, MAX);

}