#include <iostream>
using namespace std;

int _count = 0;
int main()
{
	int door_num;
	bool door_flag[21] = { false };
	bool select_flag[21] = { false };

	cin >> door_num;
	int check_select;

	int open_num;
	for (int i = 0; i < 2; i++)
	{
		cin >> open_num;
		door_flag[open_num] = true;
	}

	cin >> check_select;
	for (int i = 0; i < check_select; i++)
	{
		int temp;
		cin >> temp;
		select_flag[temp] = true;
	}

}