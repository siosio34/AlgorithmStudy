#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int num;
	int r;
	int k;
	int j;
	int temp;
	cin >> num >> k >> j;

	if (k > j)
	{
		temp = k;
		k = j;
		j = temp;
	}


	while (1)
	{
		if (k % 2 != 0 && k + 1 == j)
		{
			break;
		}

		k = (k + 1) / 2;
		j = (j + 1) / 2;

		a++;
	}

	cout << a + 1 << endl;
	return 0;
}