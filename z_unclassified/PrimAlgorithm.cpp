#include <stdio.h>

struct edge
{
	int start; // 시작점
	int end; // 도착점
	int length; //길이
};

struct distance
{
	int from;
	int d;
};

void addpath(int W[][9], int from, int to, int distance);
void LetsPrim();
void print();

