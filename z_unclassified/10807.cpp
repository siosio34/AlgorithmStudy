#include <iostream>
#include <vector>
using namespace std;
vector<int> k;
int main()
{
	int num;
	int num2;
	int count = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> num2;
		k.push_back(num2);
	}

	cin >> num2;
	for (int i = 0; i < num; i++)
	{
		if (num2 == k.at(i))
			count++;
	}

	cout << count;

}