#include <iostream>
#include <list>

using namespace std;

class Graph // 스택
{
	int V; // vertex
	list<int> *adj;
	void DFSUtil(int v, bool visited[]);
public:
	Graph(int V);
	void addEdge(int v, int w);
	void DFS(int v);
};

Graph::Graph(int v)
{
	this->V = v;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void Graph::DFSUtil(int v, bool visited[])
{
	visited[v] = true; // 지나간 점을 트루로
	cout << v << " ";
	
	list<int>::iterator it;
	for (it = adj[v].begin() ; it != adj[v].end(); it++)
	{
		if (!visited[*it]) // 내가 지나간 곳이 아닐때
			DFSUtil(*it, visited); // 그 구간 출력 
	}

}

void Graph::DFS(int v)
{
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	DFSUtil(v, visited);
}

int main()
{
	// Create a graph given in the above diagram
	Graph g(4);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	cout << "Following is Depth First Traversal (starting from vertex 2) \n";
	g.DFS(2);

	return 0;
}