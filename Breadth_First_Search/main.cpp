#include <iostream>

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
    adj[v]=w;

}

void graph::BFS(int s)
{
    bool *visited=new bool[v];
    int i;
    for(i=0;i<v;i++)
        visited[i]=false;

    list<int>::iterator i;
    list<int>queue;

    visited[s]=true;
    queue.push_back(s);

    while(!queue.empty())
    {




    }




}



int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
