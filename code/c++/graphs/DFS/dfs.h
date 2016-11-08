#ifndef _DFS_
#define _DFS_

#include <list>
using namespace std;

class Graph
{
	int V;
	list<int> *adj;
	void dfs_util(int v, bool visited[]);
public:
	Graph(int V);
	void add_edge(int v, int w);
	void dfs(int v);
	void dfs_stack(int s);
};

#endif