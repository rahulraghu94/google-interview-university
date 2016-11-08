#include <iostream>
#include "dfs.h"

using namespace std;

int main()
{
// Create a graph given in the above diagram
	Graph g(5);
	g.add_edge(0, 1);
	g.add_edge(0, 2);
	g.add_edge(1, 2);
	g.add_edge(2, 0);
	g.add_edge(2, 3);
	g.add_edge(3, 3);
	g.add_edge(3, 4);

	cout << "DFS:" << endl;;
	g.dfs(2);
	cout << endl;

	cout << "DFS Stack:" << endl;
	g.dfs_stack(2);
	cout << endl;

	return 0;
}