#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

// 평균 검색시간이 최적이 되게 최적 바이너리
// 트리를 만드는 문제

#define MAX 4 //일단은 4개로 잡아보았습니다.
float P[MAX + 1]; // KEY I 가 검색키일 확률
float MinBinaryTree[MAX + 1][MAX + 1]; // 최적의 트리를 출력하기위함
vector<int> checkNode;

struct nodetree { // 트리를 표현하기 위한 자료구조
	float key;
	nodetree* left;
	nodetree* right;

};

typedef nodetree* node_pointer;

float SumPi(int i, int j) { // 최적 평균값을 구하기 위해 나머지 확률을 더하는 함수
	float sumFloat = 0;
	for (; i <= j; i++)
		sumFloat += P[i];

	return sumFloat;
}

bool Checknodetree(int k) { // 트리에 이미 추가한 요소가 없는지 확인한다.

	for (int i = 0; i < checkNode.size(); i++) {
		if (k == checkNode[i])
			return false;
	}
	return true;
}

float OptSearchTree() // 이진 최적 트리를 구하기 위한 함수
{
	int i, j, k, diaonal;
	float A[MAX + 1][MAX + 1]; // DP 를 구현하기위함. 최적 검색 시간을 구하기위함

	for (i = 1; i <= MAX; i++) { // 초기화
		A[i][i - 1] = 0;
		A[i][i] = P[i];
		MinBinaryTree[i][i] = i;
		MinBinaryTree[i][i - 1] = 0;
	}
	A[MAX + 1][MAX] = 0;
	MinBinaryTree[MAX + 1][MAX] = 0;

	float minfloat = INT_MAX; 
	int mink; // 최소 경로 저장
	float tempfloat; // 최소 값을 구해서 저장하기 위함

	for (diaonal = 1; diaonal <= MAX - 1; diaonal++) {
		for (i = 1; i <= MAX - diaonal; i++) {
			j = i + diaonal;
			minfloat = INT_MAX; // 최솟값 초기화
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
	return A[1][MAX]; //1부터 MAX 까지 배열을 탐색함
}


node_pointer tree(int i, int j) { // ppt 에 있는 내용을 그대로 구현하니 원하는 결과가 나오지않아 조금 수정했습니다. 

	int k;
	node_pointer p;

	k = MinBinaryTree[i][j];
	if (k == 0 || !Checknodetree(k)) // 값이 같은게 있어서 하나의 트리만 뽑아 낼려면 이렇게 중복값 처리를 추가해줘야한다.
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

void PostOrderPrint(node_pointer p, int indent = 0) { // 트리를 출력하기 위한 함수
	if (p != NULL) {
		if (p->right) {
			PostOrderPrint(p->right, indent + 4);
		}
		if (indent) {
			cout << setw(indent) << ' ';
		}
		if (p->right) cout << " ↗\n" << setw(indent) << ' ';
		cout << char(p->key + 64) << "\n ";
		if (p->left) {
			cout << setw(indent) << ' ';
			cout << "↘";
			cout << "\n";
			PostOrderPrint(p->left, indent + 4);
		}
	}
}


int main()
{
	cout << "각 노드의 확률을 입력하세요 " << endl << endl;
	for (int i = 1; i <= MAX; i++) { // 일단 4개
		cin >> P[i];
	}
	cout << endl << "최적 평균 시간 " << endl;
	cout << OptSearchTree() << endl;
	node_pointer root = tree(1, MAX);

	cout << endl << "최적 이진 트리" << endl << endl;
	PostOrderPrint(root);
}