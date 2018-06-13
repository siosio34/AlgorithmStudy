#include <iostream>
using namespace std;

bool areFreinds[10][10] = { false };
int make_team(bool taken[10]);
int num;
int HumanNumber;
int isFreindNumber;
int main()
{
	
	cin >> num;



	int temp_k;
	int temp_l;
	bool _taken[10] = { false };

	for (int i = 0; i < num; i++)
	{
		cin >> HumanNumber >> isFreindNumber;
		for (int j = 0; i < isFreindNumber; i++)
		{
			cin >> temp_k >> temp_l;
			areFreinds[temp_k][temp_l] = 1;
		}

	}

	cout << make_team(_taken);
}

int make_team(bool taken[10])
{
	int firstFree = -1;

	for (int i = 0; i < HumanNumber; i++)
	{
		if (!taken[i])
		{
			firstFree = i;
			break;
		}
	}

	if (firstFree == -1)
		return 1;

	int ret = 0;
	for (int pairWith = firstFree + 1; pairWith < HumanNumber; ++pairWith)
	{
		if (!taken[pairWith] && areFreinds[firstFree][pairWith])
		{
			taken[firstFree] = taken[pairWith] = true;
			ret += make_team(taken);
			taken[firstFree] = taken[pairWith] = false;

		}
	}
	return ret;
}