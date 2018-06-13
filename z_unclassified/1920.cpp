#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main()
{
	int a;
	int b;
	int num;
	vector <int> c;
	vector <int> d;
	cin >> a;
	for (int i = 0; i<a; i++)
	{
		cin >> num;
		c.push_back(num);
	}

	cin >> b;
	for (int i = 0; i<b; i++)
	{
		cin >> num;
		d.push_back(num);

	}

	sort(c.begin(), c.end());

	for (int i = 0; i<b; i++)
	{
		if (binary_search(c.begin(), c.end(), d.at(i)) == true)
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
	return 0;
}