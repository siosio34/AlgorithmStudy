#include <stdio.h>

struct edge
{
	int start; // ������
	int end; // ������
	int length; //����
};

struct distance
{
	int from;
	int d;
};

void addpath(int W[][9], int from, int to, int distance);
void LetsPrim();
void print();

