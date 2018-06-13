#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int part_Array(int left, int right, vector<int> arr_temp)
{
	int pivot = right;
	right = pivot;
	int i = 0;
	int num = 0;

	while (left <= right)
	{
		while (arr_temp[left]<arr_temp[pivot] && left < right)
		{
			left++;
		}
		while (arr_temp[right] >= arr_temp[pivot] && left < right)
		{
			right--;
		}
		if (left < right)
		{
			int _num;
			_num = arr_temp[left];
			arr_temp[left] = arr_temp[right];
			arr_temp[right] = _num;
		}
		else
			break;

	}
	int _num;
	_num = arr_temp[left];
	arr_temp[left] = arr_temp[pivot];
	arr_temp[pivot] = _num;

	return left;
}

void print_Array(vector<int> _temp)
{
	for (int i = 0; i < _temp.size(); i++)
	{
		cout << _temp[i] << " ";
	}
	cout << endl;
}

void Quick_Sort(int left, int right, vector<int> temp)
{
	if (left < right)
	{
		int center = part_Array(left, right, temp);
		Quick_Sort(left, center - 1, temp);
		Quick_Sort(center + 1, right, temp);
	}

}


int main()
{
	cout << " 원소의 개수를 입력하세요 " << endl;

	int num;
	cin >> num;
	int Arraynum;
	vector<int> QuickArray;

	for (int i = 0; i < num; i++)
	{
		cin >> Arraynum;
		QuickArray.push_back(Arraynum);
	}

	print_Array(QuickArray);
	Quick_Sort(0, num - 1, QuickArray);
	print_Array(QuickArray);
	return 0;
}