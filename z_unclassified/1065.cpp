#include <iostream>
using namespace std;

int main()
{
	int num;
	int count = 0;
	int b, c, d;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		if (i == 1000)
			break;

		b = i / 100 % 10;
		c = i / 10 % 10;
		d = i % 10;

		if (i<100)
			count++;

		else
		{
			if (b - c == c - d)
				count++;
		}
	}

	cout << count;
	return 0;
}