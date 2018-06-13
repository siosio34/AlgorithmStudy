#include <iostream>
#include <vector>
using namespace std;

vector<int> answer; // 합했을때 나오는거 모임
vector<int> chu; // 추무게
vector<int> goosle; // 구슬 무게
int sum;

void pick(int n, vector<int>& picked, int topick) // picked 추들 있는 배열
{
	if (topick == 0)
	{
		for (int i = 0; i < picked.size(); i++)
		{
			sum += picked[i];
		}
		
		answer.push_back(sum);
		sum = 0;
		return;
	}
	
	// picked 에 있는걸 써야됨
	int smallest = picked.empty() ? 0 : picked.back();

	for (int next = smallest; next < n; ++next)
	{
		picked.push_back(chu[next]);
		pick(n, picked, topick - 1);
		picked.pop_back();
	}

}
int main()
{
	int num; // 추의 갯수
	int goosle_num; // 구슬 갯수
	
	int temp; 

	
	vector<int> temp_arr;
	
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> temp;
		chu.push_back(temp);
	}

	cin >> goosle_num;

	for (int i = 0; i < goosle_num; i++)
	{
		cin >> temp;
		goosle.push_back(temp);
	}

	for (int l = 1 ; l<=num ; l++)
	{
		pick(num, temp_arr, l);
	}

	bool check = false;

	for (int j = 0; j < goosle_num; j++)
	{
		for (int k = 0; k<answer.size(); k++)
		{
			if (goosle[j] == answer[k])
			{
				check = true;
				break;
			}

		}

		if (check)
		{
			cout << "Y" << " ";
		}
		else
		{
			cout << "N" << " ";
		}

		check = false;
	
	}



}