#include <iostream>
#include <algorithm>
using namespace std;


int get_index(int A[], int T[], int left, int right, int key)
{
	int mid;

	while (right > left + 1)
	{
		mid = (left + right) / 2;

		if (A[T[mid]] >= key)
			right = mid;
		else
			left = mid;
	}

	return right;

}

int LICC(int A[], int size)
{
	int *tailIndices = new int[size];
	int *prevIndices = new int[size];
	int len;
	

	memset(tailIndices, 0, sizeof(tailIndices[0])*size);
	memset(prevIndices, 0xFF, sizeof(prevIndices[0])*size);

	len = 1; // �ּ� ���̴� 1�� ���ۿ� ����.

	for (int i = 1; i < size; i++)
	{
		if (A[i] < A[tailIndices[0]]) // ���ο� ���� ������ó�������� ������
			tailIndices[0] = i; // �ִ� ���� ����

		else if (A[i] > A[tailIndices[len - 1]]) // ���ο� ���� ������ �� �ڰ����� Ŭ��
		{
			prevIndices[i] = tailIndices[len - 1];
			tailIndices[len++] = i;
		}

		else
		{
			int pos = get_index(A, tailIndices, -1, len - 1, A[i]); //A[i] �� ���� ���� ��ġ
			prevIndices[i] = tailIndices[pos - 1]; // A[i] �� ���� �� 1ĭ ���� ���� �迭�� �������
			tailIndices[pos] = i; // ���ο� ��ġ ����

		}
	}
		for (int i = tailIndices[len - 1]; i >= 0; i = prevIndices[i])
			cout << A[i] << "  ";
		cout << endl;

	
	return len;

}

int main()
{
	int A[] = { 2, 5, 3, 7, 11, 8, 10, 13, 6 };
	int size = sizeof(A) / sizeof(A[0]);

	printf("LIS size %d\n", LICC(A, size));

	return 0;
}