#include <iostream>
#include <string>
#include <vector>
using namespace std;
int cache[31][31];
int sum;
vector<int> answer;

int jagee(int n, int r)
{
	if (r == 0 || n == r)
		return 1;

	if (cache[n][r] != -1)
		return cache[n][r];

	return cache[n][r] = jagee(n - 1, r - 1) + jagee(n - 1, r);
}

int main()
{
	int O;
	int n;
	int m;
	cin >> O;
	for (int i = 0; i < 31; i++)
	{
		for (int j = 0; j < 31; j++)
		{
			cache[i][j] = -1;
		}
	}

	for (int i = 0; i < O; i++)
	{
		cin >> m >> n;
		answer.push_back(jagee(n, m));
	}

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer.at(i) << endl;
	}
	return 0;

}