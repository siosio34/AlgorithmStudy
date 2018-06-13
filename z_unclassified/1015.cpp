#include<iostream>
using namespace std;

int N;
int A[100][2];

int main()
{
	int c;
	cin >> N;
	for (int i = 0; i<N; i++) {
		cin >> A[i][0];
		A[i][1] = i;
	}
	for (int i = 0; i<N; i++) {
		for (int j = 0; j<N - 1; j++) {
			if (A[j][0] > A[j + 1][0]) {
				c = A[j][0];
				A[j][0] = A[j + 1][0];
				A[j + 1][0] = c;
				c = A[j][1];
				A[j][1] = A[j + 1][1];
				A[j + 1][1] = c;
			}
		}
	}
	for (int i = 0; i<N; i++) {
		for (int j = 0; j<N; j++) {
			if (A[j][1] == i) cout << j << " ";
		}
	}
	return 0;
}