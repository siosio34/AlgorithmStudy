#include <iostream>
#include <stack>
#include <list>
using namespace std;

int V, K;
int singer;
int num;
list<int> *adj;


void topologicalSortUtil(int v, bool visited[],
	stack<int> &Stack)
{
	visited[v] = true;

	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
	{
		if (!visited[*i])
			topologicalSortUtil(*i, visited, Stack);
	}
	Stack.push(v);

}

void topologicalSort()
{
	stack<int> Stack;

	bool *visited = new bool[V];

	for (int i = 0; i < V; i++)
		visited[i] = false;

	for (int i = 0; i < V; i++)
	{
		if(visited[i] == false)
			topologicalSortUtil(i, visited, Stack);
	}

	// Print contents of stack
	while (Stack.empty() == false)
	{
		cout << Stack.top() << " ";
		Stack.pop();
	}
}


int main()
{
	cin >> V >> K;

	adj = new list<int>[V+1];

	for (int i = 0; i < K; i++)
	{
		cin >> singer;
		for (int j = 0; j < singer; j++)
		{
			cin >> num;
			adj[num].push_back(i);
		}
		
	}
	
	topologicalSort();
	return 0;
}