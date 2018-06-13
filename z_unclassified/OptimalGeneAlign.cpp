#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string temp1, temp2;
int penalty;

#define NOEQUAL 1 // ����������
#define TM 2 // ƴ

int check_min(int a, int b, int c) { // 3���� ���ڸ� ���ϴ� �Լ�
	if (a < b && a < c) {
		return a;
	}
	else if (b<c && b < a) {
		return b;
	}
	else {
		return c;
	}
}

int run1(int i, int j) {
	if (i == temp1.size()) { // ���̻� temp1 �迭�� ƴ�� ä�� �� ������
		penalty = TM * (temp2.size() - j); // �г�Ƽ�� ä���� �ɸ�ŭ�� ƴ��ŭ�� ����
		return penalty;
	}
	else if (j == temp2.size()) { // ���̻� temp2 �迭�� ƴ�� ä�� �� ������
		penalty = TM * (temp1.size() - i); // �г�Ƽ�� ä���� �ɸ�ŭ�� ƴ��ŭ�� ����
		return penalty;
	}

	else {
		if (temp1[i] != temp2[j]) penalty += NOEQUAL; // ��ġ���ִ� �α��ڰ� ��ġ�Ǿ� ���� ������
	}

	penalty = check_min(run1(i + 1, j + 1) + penalty, // ƴ�� �ȸ���°��
						run1(i + 1, j) + TM,  // ó������ �Է��� ��Ʈ���� ƴ�� ����� ���
						run1(i, j + 1) + TM); // �ι�°�� �Է��� ��Ʈ���� ƴ�� ����� ���
	return penalty;

}

int main()
{
	cin >> temp1 >> temp2;
	penalty = 0;
	cout << endl <<"������ �г�Ƽ : "<< run1(0, 0) << endl;
}