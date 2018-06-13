#include <iostream>
using namespace std;

long long D[91][2];

int main()
{
	int num;
	cin >> num;

	
	D[1][0] = 0;
	D[1][1] = 1;
	

	for (int i = 2; i <= num; i++) {

		if (i - 1 == 0) {
			D[i][0] = D[i - 1][1];
		}
		else
		{
			D[i][0] = (D[i - 1][0] + D[i - 1][1]);
			D[i][1] = D[i - 1][0];
		}
	}

	long long ans = 0;

	for (int i = 0; i < 2; i++) {
		ans += D[num][i];
	}
	cout << ans;
}