#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

	int num;
	int a, b, c;

	cin >> num;
	int **arr = new int *[num];

	for (int i = 0; i<num; i++)
	{
		arr[i] = new int[3];
	}

	for (int i = 0; i<num; i++)
	{
		for (int j = 0; j<3; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i<num; i++)
	{
		if (arr[i][0] > arr[i][1] && arr[i][0] >arr[i][2])
		{
			c = arr[i][0];
			a = arr[i][1];
			b = arr[i][2];
		}

		else if (arr[i][1] > arr[i][0] && arr[i][1] >arr[i][2])

		{
			c = arr[i][1];
			a = arr[i][0];
			b = arr[i][2];
		}

		else if (arr[i][2] > arr[i][1] && arr[i][2] >arr[i][0])

		{
			c = arr[i][2];
			a = arr[i][1];
			b = arr[i][0];
		}

		cout << "Scenario #" << (i + 1) << ":" << endl;
		if ((c*c) == (b*b) + (a*a))
		{
			cout << "yes";
		}
		else
			cout << "no";

		cout << endl << endl;
	}
}