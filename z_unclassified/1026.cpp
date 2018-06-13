#include <iostream>
using namespace std;

int main()
{

	int num;
	int temp;
	int sum = 0;

	cin >> num;

	int *a = new int[num];
	int *b = new int[num];

	for (int i = 0; i<num; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i<num; i++)
	{
		cin >> b[i];
	}

	for (int i = 1; i<num; i++)
	{
		for (int j = 0; j<num - 1; j++)
		{
			if (a[i] < a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
			if (b[i] < b[j])
			{
				temp = b[j];
				b[j] = b[i];
				b[i] = temp;
			}
		}
	}

	for (int i = 0; i<num; i++)
	{
		sum += (a[i] * b[num - 1 - i]);
	}

	cout << sum;
	return 0;
}