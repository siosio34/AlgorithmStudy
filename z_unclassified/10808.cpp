#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> k;
int main()
{
	string a;
	cin >> a;
	int b[26];

	for (int i = 0; i < 26; i++)
		b[i] = 0;

	for (int i = 0; i < a.size(); i++)
	{
		b[a[i] - 97]++;
	}

	for (int i = 0; i < 26; i++)
		cout << b[i] << " ";

}