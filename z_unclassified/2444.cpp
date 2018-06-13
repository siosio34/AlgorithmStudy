#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	for (int i = 0; i < 2 * num; i++)
	{
		if (i < num)
		{
			for (int j = i + 1; j < num; j++)
				cout << " ";

			for (int k = num - i; k <= num + i; k++)
				cout << "*";
		}
		else
		{
			int count = num-1;
			for (int j = i+1; j > num; j--)
			{
				cout << " ";
				count--;
			}

			for (int k = num - count; k <= num + count; k++)
				cout << "*";


		}

		cout << endl;
	}
}