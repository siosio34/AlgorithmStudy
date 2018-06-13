#include <iostream>
using namespace std;

int grid[9][9]; // ������ ���

bool CheckClear(int &row,int &col) { // ���࿡ ���� 0�� ������ ������ �� ������

	for (row = 0; row < 9; row++)
		for (col = 0; col < 9; col++)
			if (grid[row][col] == 0)
				return true;

	return false;

}

bool CheckCol(int col, int num) // ��üũ
{
	for (int row = 0; row < 9; row++)
		if (grid[row][col] == num)
			return true;
	return false;
}

bool CheckRow(int row, int num) // ��üũ
{
	for (int col = 0; col < 9; col++)
		if (grid[row][col] == num)
			return true;
	return false;
}

bool CheckBox(int Start_row,int Start_col, int num) // 3 * 3 ���� üũ
{
	for (int row = 0; row < 3; row++)
		for (int col = 0; col < 3; col++)
			if (grid[row + Start_row][col + Start_col] == num)
				return true;

	return false;

}

bool isSafe(int row, int col, int num)
{
	
	return !CheckRow(row, num) &&
		!CheckCol(col, num) &&
		!CheckBox(row - row % 3, col - col % 3, num);
}


bool IsSudoku() {

	int row, col;

	if (!CheckClear(row, col)) // �� �̻� üũ�Ȱ� 0�� ������
		return true; 

	for (int i = 1; i <= 9; i++)
	{
		if (isSafe(row,col,i)) // �־��� ���ڰ� ���ǿ� �� �����ϸ�
		{
			grid[row][col] = i; // i�� �� ��� ���� �ش��ϴ� �κп� ����

			if (IsSudoku())
				return true;

			grid[row][col] = 0; // ���� �������� �� �κ��� ������ ���ǿ� �������� ������ �ٽ� 0���� �ʱ�ȭ

		}
	}
	return false;

}


void PrintSudoku() {

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++) {
			cout << grid[i][j] << " ";
		}

		cout << endl;
	}
}


int main()
{
	int num;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> num;
			grid[i][j] = num;
		}

	}

	if (IsSudoku() == true)
		PrintSudoku();

	return  0;

}