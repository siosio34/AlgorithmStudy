#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{

	int num;
	int check = 0;
	int l = 0;
	string m;
	string n;
	cin >> num;

	string *a = new string[num];

	for (int i = 0; i<num; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i<num; i++)
	{
		for (int j = i + 1; j<num; j++)
		{
			for (int k = 0; k<a[i].size(); k++)
			{
				if (a[i][k] == a[j][k])
				{
					l++;
				}
				else
				{

					break;
				}
			}
			if (check < l)
			{
				check = l;
				n = a[i];
				m = a[j];

			}
			l = 0;
		}
	}

	cout << n << endl;
	cout << m;
}