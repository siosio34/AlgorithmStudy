#include <iostream>
using namespace std;

int main()
{
	int a[100];
	int b[100];
	int c[100];
	int sum[100];
	int studentNum;
	cin >> studentNum;

	for (int i = 0; i<studentNum; i++)
	{
		a[i] = i;
	}

	for (int i = 0; i<studentNum; i++)
	{
		cin >> b[i];
	}

	for (int i = 0; i<studentNum; i++)
	{
		c[i] = a[i] - b[i];

		for (int j = 0; j<i; j++)
		{
			if (c[i] <= c[j])
				c[j]++;
		}
	}

	for (int i = 0; i<studentNum; i++)
	{
		for (int j = 0; j<studentNum; j++)
		{
			if (c[j] == i)
				sum[i] = j;
		}
	}

	for (int i = 0; i<studentNum; i++)
	{
		cout << sum[i] + 1 << " ";
	}
	return 0;
}