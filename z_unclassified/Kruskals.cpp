#include <iostream>
using namespace std;


// a structure to represent a weighted edge in graph
struct Edge
{
	int src, dest, weight;
};

// a structure to represent a connected, undirected and weighted graph
struct Graph
{
	// V-> Number of vertices, E-> Number of edges
	int V, E;

	// graph is represented as an array of edges. Since the graph is
	// undirected, the edge from src to dest is also edge from dest
	// to src. Both are counted as 1 edge here.
	struct Edge* edge;
};

// Creates a graph with V vertices and E edges
struct Graph* createGraph(int V, int E)
{
	struct Graph* graph = (struct Graph*) malloc(sizeof(struct Graph));
	graph->V = V;
	graph->E = E;

	graph->edge = (struct Edge*) malloc(graph->E * sizeof(struct Edge));

	return graph;
}

// A structure to represent a subset for union-find
struct subset
{
	int parent;
	int rank;
};

int find(struct subset subsets[], int i)
{
	if (subsets[i].parent != i)
		subsets[i].parent = find(subsets, subsets[i].parent);

	return subsets[i].parent;
}

void Union(struct subset subsets[], int x, int y)
{
	int xroot = find(subsets, x);
	int yroot = find(subsets, y);

	if (subsets[xroot].rank < subsets[yroot].rank)
		subsets[xroot].parent = yroot;
	else if (subsets[xroot].rank > subsets[yroot].rank)
		subsets[yroot].parent = xroot;

	else
	{
		subsets[yroot].parent = xroot;
		subsets[xroot].rank++;
	}
}

int myComp(const void* a, const void* b)
{
	struct Edge* a1 = (struct Edge*)a;
	struct Edge* b1 = (struct Edge*)b;
	return a1->weight > b1->weight;
}

void kruskal(struct Graph* graph)
{

	int V = graph->V;
	struct Edge *result = new Edge[V];  // Tnis will store the resultant MST

	int e = 0;  // An index variable, used for result[]
	int i = 0;  // An index variable, used for sorted edges


	qsort(graph->edge, graph->E, sizeof(graph->edge[0]), myComp); // ����Ʈ!

	struct subset *subsets =
		(struct subset*) malloc(V * sizeof(struct subset));

	for (int v = 0; v < V; ++v) // �ʱ�ȭ
	{
		subsets[v].parent = v;
		subsets[v].rank = 0;
	}

	while (e < V - 1)
	{
		// Step 2: Pick the smallest edge. And increment the index
		// for next iteration
		struct Edge next_edge = graph->edge[i++];

		int x = find(subsets, next_edge.src);
		int y = find(subsets, next_edge.dest);

		// If including this edge does't cause cycle, include it
		// in result and increment the index of result for next edge
		if (x != y)
		{
			result[e++] = next_edge;
			Union(subsets, x, y);
		}
		// Else discard the next_edge
	}
	// print the contents of result[] to display the built MST
	printf("Following are the edges in the constructed MST\n");
	for (i = 0; i < e; ++i)
		printf("%d -- %d == %d\n", result[i].src, result[i].dest,
			result[i].weight);
	return;
}


int main()
{
	/* Let us create following weighted graph
	10
	0--------1
	|  \     |
	6|   5\   |15
	|      \ |
	2--------3
	4       */
	int V = 4;  // Number of vertices in graph
	int E = 5;  // Number of edges in graph
	struct Graph* graph = createGraph(V, E);


	// add edge 0-1
	graph->edge[0].src = 0;
	graph->edge[0].dest = 1;
	graph->edge[0].weight = 10;

	// add edge 0-2
	graph->edge[1].src = 0;
	graph->edge[1].dest = 2;
	graph->edge[1].weight = 6;

	// add edge 0-3
	graph->edge[2].src = 0;
	graph->edge[2].dest = 3;
	graph->edge[2].weight = 5;

	// add edge 1-3
	graph->edge[3].src = 1;
	graph->edge[3].dest = 3;
	graph->edge[3].weight = 15;

	// add edge 2-3
	graph->edge[4].src = 2;
	graph->edge[4].dest = 3;
	graph->edge[4].weight = 4;

	kruskal(graph);

	return 0;
}