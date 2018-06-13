
#include <iostream>
#include <vector>
#pragma warning (disable:4996)
using namespace std;

#define MAX 4
vector< vector< int > >  dp; // 2���� ����(�迭)
int src;
int cities2[MAX][MAX] = { {0,2,1,5},{ 999,0,2,4},{2,3,0,999 },{7,1,10,0} };
 // 999 �� ����Ǿ� ����������

void init() { // ���� ���� �ʱ�ȭ
	for (int i = 0; i < MAX; ++i)
		dp[1 << i][i] = cities2[src][i];
}

// TSP
int TSP(int status, int x) {

	if (dp[status][x] != -1) // �ѹ��̶� ����� ���̶��
		return dp[status][x]; // �� ���� �����Ѵ�.

	int mask = 1 << x; //mask �� 1,2,4,8 �þ��. 
	dp[status][x] = INT_MAX;
	for (int i = 0; i < MAX; ++i) {
		if (i != x && (status & (1 << i))) {
			int temp = TSP(status - mask, i) + cities2[i][x];
			if (dp[status][x] > temp) {
				dp[status][x] = temp;

			}
		}

	}
	return dp[status][x];
}

int main() {

	dp = vector< vector< int > >(1 << MAX, vector< int >(MAX, -1)); // 2���� ����(�迭)

	init();
	cout << "������ �־��� ������ ����� ���̴� : " << TSP((1 << MAX) - 1, 0);

	cout << endl;
	cout << endl;

	return 0;
}