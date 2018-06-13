#include <iostream>
using namespace std;

#define V 4
#define INF 99999

// Floyd Wwarshall Algorithm
// 최단거리를 위하기 위한 문제.
// 플로이드-워셜 알고리즘(Floyd-Warshall Algorithm)은 그래프에서 모든 꼭짓점 사이의 최단 경로의 거리를 구하는 알고리즘이다.

void printSolution(int dist[][V]);
void floydWarshell(int Graph[][V]);


int main()
{
	/* Let us create the following weighted graph
	10
	(0)------->(3)
	|         /|\
	5 |          |
	|          | 1
	\|/         |
	(1)------->(2)
	3           */
	int graph[V][V] = { { 0,   5,  INF, 10 },
	{ INF, 0,   3, INF },
	{ INF, INF, 0,   1 },
	{ INF, INF, INF, 0 }
	};

	// Print the solution
	floydWarshell(graph);
	return 0;
}
void floydWarshell(int Graph[][V])
{
	int dist[V][V];

	for (int i = 0; i < V; i++) // 초기화 구문
	{
		for (int j = 0; j < V; j++)
		{
			dist[i][j] = Graph[i][j];
		}
	}

	for (int k = 0; k < V; k++)
	{
		for (int i = 0; i < V; i++)
		{
			for (int j = 0; j < V; j++)
			{
				if (dist[i][k] + dist[k][j] < dist[i][j])
					dist[i][j] = dist[i][k] + dist[k][j];
			}
		}
	}

	printSolution(dist);
}

void printSolution(int dist[][V])
{
	printf("Following matrix shows the shortest distances"
		" between every pair of vertices \n");
	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			if (dist[i][j] == INF)
				printf("%7s", "INF");
			else
				printf("%7d", dist[i][j]);
		}
		printf("\n");
	}
}
