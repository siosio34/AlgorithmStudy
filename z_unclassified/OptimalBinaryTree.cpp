#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

// ��� �˻��ð��� ������ �ǰ� ���� ���̳ʸ�
// Ʈ���� ����� ����

#define MAX 4 //�ϴ��� 4���� ��ƺ��ҽ��ϴ�.
float P[MAX + 1]; // KEY I �� �˻�Ű�� Ȯ��
float MinBinaryTree[MAX + 1][MAX + 1]; // ������ Ʈ���� ����ϱ�����
vector<int> checkNode;

struct nodetree { // Ʈ���� ǥ���ϱ� ���� �ڷᱸ��
	float key;
	nodetree* left;
	nodetree* right;

};

typedef nodetree* node_pointer;

float SumPi(int i, int j) { // ���� ��հ��� ���ϱ� ���� ������ Ȯ���� ���ϴ� �Լ�
	float sumFloat = 0;
	for (; i <= j; i++)
		sumFloat += P[i];

	return sumFloat;
}

bool Checknodetree(int k) { // Ʈ���� �̹� �߰��� ��Ұ� ������ Ȯ���Ѵ�.

	for (int i = 0; i < checkNode.size(); i++) {
		if (k == checkNode[i])
			return false;
	}
	return true;
}

float OptSearchTree() // ���� ���� Ʈ���� ���ϱ� ���� �Լ�
{
	int i, j, k, diaonal;
	float A[MAX + 1][MAX + 1]; // DP �� �����ϱ�����. ���� �˻� �ð��� ���ϱ�����

	for (i = 1; i <= MAX; i++) { // �ʱ�ȭ
		A[i][i - 1] = 0;
		A[i][i] = P[i];
		MinBinaryTree[i][i] = i;
		MinBinaryTree[i][i - 1] = 0;
	}
	A[MAX + 1][MAX] = 0;
	MinBinaryTree[MAX + 1][MAX] = 0;

	float minfloat = INT_MAX; 
	int mink; // �ּ� ��� ����
	float tempfloat; // �ּ� ���� ���ؼ� �����ϱ� ����

	for (diaonal = 1; diaonal <= MAX - 1; diaonal++) {
		for (i = 1; i <= MAX - diaonal; i++) {
			j = i + diaonal;
			minfloat = INT_MAX; // �ּڰ� �ʱ�ȭ
			for (k = i; k <= j; k++) {
				tempfloat = A[i][k - 1] + A[k + 1][j];
				if (tempfloat < minfloat) {
					minfloat = tempfloat;
					mink = k;
				}
			}
			MinBinaryTree[i][j] = mink;
			A[i][j] = minfloat + SumPi(i, j);
		}
	}
	return A[1][MAX]; //1���� MAX ���� �迭�� Ž����
}


node_pointer tree(int i, int j) { // ppt �� �ִ� ������ �״�� �����ϴ� ���ϴ� ����� �������ʾ� ���� �����߽��ϴ�. 

	int k;
	node_pointer p;

	k = MinBinaryTree[i][j];
	if (k == 0 || !Checknodetree(k)) // ���� ������ �־ �ϳ��� Ʈ���� �̾� ������ �̷��� �ߺ��� ó���� �߰�������Ѵ�.
		return NULL;

	else {
		checkNode.push_back(k);
		p = new nodetree;
		p->key = k;
		p->left = tree(1, k - 1);
		p->right = tree(k + 1, j);
		return p;
	}
}

void PostOrderPrint(node_pointer p, int indent = 0) { // Ʈ���� ����ϱ� ���� �Լ�
	if (p != NULL) {
		if (p->right) {
			PostOrderPrint(p->right, indent + 4);
		}
		if (indent) {
			cout << setw(indent) << ' ';
		}
		if (p->right) cout << " ��\n" << setw(indent) << ' ';
		cout << char(p->key + 64) << "\n ";
		if (p->left) {
			cout << setw(indent) << ' ';
			cout << "��";
			cout << "\n";
			PostOrderPrint(p->left, indent + 4);
		}
	}
}


int main()
{
	cout << "�� ����� Ȯ���� �Է��ϼ��� " << endl << endl;
	for (int i = 1; i <= MAX; i++) { // �ϴ� 4��
		cin >> P[i];
	}
	cout << endl << "���� ��� �ð� " << endl;
	cout << OptSearchTree() << endl;
	node_pointer root = tree(1, MAX);

	cout << endl << "���� ���� Ʈ��" << endl << endl;
	PostOrderPrint(root);
}