#include <iostream>
using namespace std;

#define MAX_NUM 1000000007
#define Max_Coin_Num 5000

int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int main()
{
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		int cost, Num_Coin;
		int coins[Max_Coin_Num];
		int temp_num;
		long long result[Max_Coin_Num+1] = { -1 };

		cin >> cost >> Num_Coin;
		
		for (int j = 0; j < Num_Coin; j++)
		{
			cin >> temp_num;
			coins[j] = temp_num;
		}

		qsort(coins, Num_Coin, sizeof(int), compare);

		for (int k = 0; k < Num_Coin; k++)
		{
			int sum = coins[k];

			if (sum > cost)
				break;

			result[sum]++;
			
			for (int j = 1; sum + j <= cost; j++)
			{
				if (result[j] >= 0)
					result[sum + j] += result[j];
			}

		}

		long long cnt = 0;
		cnt = result[cost];

		if (cnt > MAX_NUM)
			printf("%d\n", (cnt % MAX_NUM));
		else
			printf("%d\n", cnt);

	}
}

