#include <iostream>
#include <list>
#include <stack>
#include "dfs.h"

using namespace std;

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::add_edge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
}

void Graph::dfs_util(int v, bool visited[])
{
	visited[v] = true;
	cout << v << " ";

	list<int>::iterator i;
	for (i = adj[v].begin(); i != adj[v].end(); ++i)
		if (!visited[*i])
			dfs_util(*i, visited);
}

void Graph::dfs(int v)
{
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	dfs_util(v, visited);
}

void Graph::dfs_stack(int s)
{
	bool *visited = new bool[V];
	for(int i = 0; i < V; i++)
		visited[i] = false;

	stack<int> stack;

	visited[s] = true;
	stack.push(s);

	list<int>::iterator i;

	while (!stack.empty())
	{
		s = stack.top();
		cout << s << " ";
		stack.pop();

		for (i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if (!visited[*i])
			{
				visited[*i] = true;
				stack.push(*i);
			}
		}
	}
}