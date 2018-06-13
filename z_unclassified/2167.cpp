#include <iostream>
using namespace std;

int main()
{

	int row, col;
	cin >> row;
	cin >> col;
	int k;
	int rowa, rowb, colc, cold;
	int sum = 0;

	int **pt = new int *[row];
	for (int i = 0; i< row; i++)
		pt[i] = new int[col];

	for (int i = 0; i<row; i++)
	{
		for (int j = 0; j<col; j++)
		{
			cin >> pt[i][j];
		}
	}

	cin >> k;

	for (int i = 0; i<k; i++)
	{
		cin >> rowa >> colc >> rowb >> cold;
		sum = 0;

		for (int l = rowa - 1; l<rowb; l++)
		{
			for (int m = colc - 1; m<cold; m++)
			{
				sum += pt[l][m];
			}

		}
		cout << sum << endl;
	}
	return 0;

}