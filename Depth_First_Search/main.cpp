#include <iostream>
#include<list>

using namespace std;

class graph
{
private:
    int v;
    list<int> *adj;

public:
    graph(int v);
    void addEdge(int v,int w);
    void DFS(int s);
    void DFSutil(int s,bool visited[]);

};

graph::graph(int v)
{
    this->v=v;
    adj=new list<int>[v];

}

void graph::addEdge(int v,int w)
{
    adj[v].push_back(w);

}

void graph::DFSutil(int s,bool visited[])
{
    visited[s]=true;
    cout<<s<<" ";

    list<int>::iterator i;
    for(i=adj[s].begin();i!=adj[s].end();i++)
    {
        if(!visited[*i])
        {
            DFSutil(*i,visited);

        }
    }

}

void graph::DFS(int s)
{
    bool *visited=new bool[v];
    int j;
    for(j=0;j<v;j++)
        visited[j]=false;

    DFSutil(s,visited);

}








int main()
{
    graph g(4);

    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,0);
    g.addEdge(2,3);
    g.addEdge(3,3);

    cout<<"\n"<<"Depth First Search of the given graph is ";
    g.DFS(2);

    return 0;
}
