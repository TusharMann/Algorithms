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
    void BFS(int s);

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

void graph::BFS(int s)
{
    bool *visited=new bool[v];
    int j;
    for(j=0;j<v;j++)
        visited[j]=false;

    list<int>::iterator i;
    list<int>queue;

    visited[s]=true;
    queue.push_back(s);

    while(!queue.empty())
    {
        s=queue.front();
        cout<<s<<" ";
        queue.pop_front();


        for(i=adj[s].begin();i!=adj[s].end();i++)
        {
            if(!visited[*i])
            {
                visited[*i]=true;
                queue.push_back(*i);
            }

        }



    }




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

    cout<<"\n"<<"Breadth First Search of the given graph is ";
    g.BFS(2);

    return 0;
}
