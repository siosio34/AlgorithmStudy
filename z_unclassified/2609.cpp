#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int i;;
	cin >> a >> b;

	for (i = a; i != 0; i--)
	{
		if (a%i == 0 && b%i == 0)
		{
			cout << i << endl;
			break;
		}
	}

	cout << a*b / i;
	return 0;
}