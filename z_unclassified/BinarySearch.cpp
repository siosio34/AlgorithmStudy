#include <iostream>
using namespace std;

int bi_search(int left, int right, int key,int arr[])
{
	if (right >= left)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] > key)
			return bi_search(left, mid - 1, key, arr);
		else
			return bi_search(mid + 1, right, key, arr);
	}

	return -1;
}
int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int num;
	cin >> num;;
	

	int test;
	test = bi_search(0, 5, num, arr);
	
	if (test != -1)
		cout << " 찾음" << endl;
	else
		cout << "못찾음 " << endl;
}