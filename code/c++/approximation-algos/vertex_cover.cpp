#include <iostream>
#include <list>

using namespace std;

class Graph
{
        int V;
        list<int> *adj;
public:
        Graph(int V);  
        void add_edge(int v, int w);
        void vertex_cover();  
};

Graph::Graph(int V)
{
        this->V = V;
        adj = new list<int>[V];
}

void Graph::add_edge(int v, int w)
{
        adj[v].push_back(w); 
        adj[w].push_back(v);
}

void Graph::vertex_cover()
{
        bool visited[V];
        int count_vertex = 0;

        for (int i=0; i<V; i++){
                visited[i] = false;
        }

        list<int>::iterator i;

        for (int u=0; u<V; u++){
                if (visited[u] == false){
                        for (i= adj[u].begin(); i != adj[u].end(); ++i){
                                int v = *i;
                                if (visited[v] == false){
                                        visited[v] = true;
                                        visited[u]  = true;
                                        break;
                                }
                        }
                }
        }
        for (int i=0; i<V; i++){
                if (visited[i]){
                        cout << i << " ";
                        count_vertex ++;
                }
        }

        cout << endl << "Vertext count number: " << count_vertex << endl;
}

int main()
{
        Graph g(6);
        
        g.add_edge(0, 1);
        g.add_edge(0, 2);
        g.add_edge(0, 3);
        g.add_edge(0, 4);
        g.add_edge(0, 5);

        g.vertex_cover();

        return 0;
}