#include <iostream>
#include <vector>
using namespace std;

vector<int> answer; // �������� �����°� ����
vector<int> chu; // �߹���
vector<int> goosle; // ���� ����
int sum;

void pick(int n, vector<int>& picked, int topick) // picked �ߵ� �ִ� �迭
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
	
	// picked �� �ִ°� ��ߵ�
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
	int num; // ���� ����
	int goosle_num; // ���� ����
	
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