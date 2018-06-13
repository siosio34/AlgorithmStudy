#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int n, capacity;
int volume[100], need[100]; // volume 은 양 need 는 필요도
int cache[1001][100];
string name[100];

int pack(int capacity, int item) // 최대 필요도인걸 구해야 된다. // DP
{
	if (item == n) return 0;
	int &ret = cache[capacity][item]; // dp 를 위너
	if (ret != -1) return ret;

	ret = pack(capacity, item + 1);

	if (capacity >= volume[item])
		ret = max(ret, pack(capacity - volume[item], item + 1) + need[item]);

	return ret;
}

void reconstruct(int capacity, int item, vector<string>& picked)
{
	if (item == n) return; // 아이템 전부 생각해봄
	if (pack(capacity, item) == pack(capacity, item + 1))
	{
		reconstruct(capacity, item + 1, picked);
	}
	else
	{
		picked.push_back(name[item]);
		reconstruct(capacity - volume[item], item + 1, picked);
	}
}
int main()
{
	
}