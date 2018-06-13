#include <iostream>
using namespace std;

#define DIVNUM 1,000,000,000

long long d[1001][11];

int main()
{
	int num;
	cin >> num;

	for (int i = 0; i <= 9; i++) // 계단수가 하나일경우
		d[1][i] = 1;

	for (int i = 2; i <= num; i++) {
		for (int j = 0; j <= 9; j++) {
			//if (j - 1 >= 0) d[i][j] += d[i - 1][j - 1];
			for (int k = 0; k <= j; k++)
				d[i][j] += d[i - 1][k];

			d[i][j] = d[i][j] % 10007;
		}
	}

	long long ans = 0;
	for (int i = 0; i <= 9; i++) ans += d[num][i];
	ans = ans % 10007;

	cout << ans;
}