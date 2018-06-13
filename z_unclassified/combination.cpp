#include <iostream>
#include <vector>
using namespace std;

void combination(int num, vector<int> &picked, int toPick);

void print(vector<int> temp);


int main()
{
	vector<int> a;
	//for (int i = 0; i < 6; i++)
	//{
	//	a.push_back(i);
	//}
	combination(6, a, 2);

}

void combination(int num, vector<int> &picked, int toPick)
{
	if (toPick == 0)
	{
		print(picked);
		return ;
	}

	else
	{
		int smallest = picked.empty() ? 0 : picked.back() + 1;
		for (int next = smallest; next < num; ++next)
		{
			picked.push_back(next);
			combination(num, picked, toPick - 1);
			picked.pop_back();
		}
	}

}
void print(vector<int> temp)
{
	for (int i = 0; i < temp.size(); i++)
		cout << temp[i] << " ";

	cout << endl;

}