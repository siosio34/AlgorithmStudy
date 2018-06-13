#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

vector<string> c;

int check(string a);

int main()
{
	long int arr[10];
	long long int b = 0;

	string a;

	for (int i = 0; i < 10; i++)
		arr[i] = pow(10, i);

	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		c.push_back(a);
	}
	b = (10 * (check(c.at(0))) + check(c.at(1)));

	cout << b * arr[check(c.at(2))];
}

int check(string a)
{
	if ("black" == a)
		return 0;
	else if ("brown" == a)
		return 1;
	else if ("red" == a)
		return 2;
	else if ("orange" == a)
		return 3;
	else if ("yellow" == a)
		return 4;
	else if ("green" == a)
		return 5;
	else if ("blue" == a)
		return 6;
	else if ("violet" == a)
		return 7;
	else if ("grey" == a)
		return 8;
	else if ("white" == a)
		return 9;
}