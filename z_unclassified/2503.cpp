#include<stdio.h>

int N, Answer;
int A[110][3];

int main()
{
	int n, m, k, c;
	int q, w, e;
	int s, b;
	scanf("%d", &N);
	for (int i = 0; i<N; i++) scanf("%d%d%d", &A[i][0], &A[i][1], &A[i][2]);
	for (int i = 100; i<1000; i++) {
		n = i / 100;
		m = i / 10 % 10;
		k = i % 10;
		if (n == 0 || m == 0 || k == 0) continue;
		if (n == m || m == k || k == n) continue;
		c = 0;
		for (int j = 0; j<N; j++) {
			s = b = 0;
			q = A[j][0] / 100;
			w = A[j][0] / 10 % 10;
			e = A[j][0] % 10;
			if (q == n) s++;
			if (q == m) b++;
			if (q == k) b++;
			if (w == n) b++;
			if (w == m) s++;
			if (w == k) b++;
			if (e == n) b++;
			if (e == m) b++;
			if (e == k) s++;
			if (A[j][1] != s || A[j][2] != b) {
				c = -1;
				break;
			}
		}
		if (c == 0) {
			Answer++;
		}
	}
	printf("%d", Answer);
	return 0;