#include <iostream>
#include <stdio.h>
using namespace std;

// �ѹ��� �Ѱ��� ��ž�� �ű��
// �׾Ƴ��� ������ �׻� ���ǰ��� �Ʒ��ͺ��� �۾ƾߵ�.
void solve(int number, int x, int y) {
	if(number == 0) {
		return;
	}
	// z �� 6-x-y;
	// n-1 ���ǿ����� x���� z���� �Űܳ���������
	solve(number - 1, x, 6 - x - y);
	printf("%d %d\n", x, y);
	// n��°������ y�� �ű��
	// ������ n-1 ���ǿ����� z���� y�� �Ű��ش�.
	solve(number - 1, 6 - x - y,y);


}
int main() {

	int n;
	cin >> n;
	
	cout << (1 << n) - 1 << endl;
	solve(n, 1, 3);
	return 0;

}