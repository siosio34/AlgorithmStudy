#include <iostream>
using namespace std;

long long d[101][10];

int main()
{
	int num;
	cin >> num;

	for (int i = 1; i <= 9; i++) // 계단수가 하나일경우
		d[1][i] = 1;

	for (int i = 2; i <= num; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j - 1 >= 0) d[i][j] += d[i - 1][j - 1];
			if (j + 1 <= 9) d[i][j] += d[i - 1][j + 1];
			d[i][j] = d[i][j] % 1000000000;
		}
	}

	long long ans = 0;
	for (int i = 0; i <= 9; i++) ans += d[num][i];
	ans = ans % 1000000000;

	cout << ans;
}