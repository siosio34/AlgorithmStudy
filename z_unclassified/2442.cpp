#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	
	for (int i = 0; i < num; i++)
	{
		for (int j = i + 1; j < num; j++)
			cout << " ";

		for (int k = num - i; k <= num + i; k++)
			cout << "*";

		cout << endl;
	}
}