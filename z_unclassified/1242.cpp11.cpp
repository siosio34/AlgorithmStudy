#include <iostream>
#include <vector>
using namespace std;

int N, M, K;
vector<int> cache1;

int main()
{
	cin >> N >> M >> K;
	int count = 1;
	int i = 0;
	

	int position = K-1;

	for (int i = 0; i < N; i++)
	{
		cache1.push_back(i);
	}

	while (1)
	{
		i = (i + M - 1)%N;

		if (i == position || N == 1)
			break;

		else
		{			
			cache1[i] = move(cache1.back());
			cache1.pop_back();

			if (i < position)
			{
				position--;
			}

		}

		N--;
		count++;
	}

	cout << count;
	return 0;

}