#include <iostream>
#include<list>

using namespace std;

int main()
{
    list<int> q;
    q.push_back(2);
    q.push_back(6);
    q.push_back(3);
    q.push_back(7);
    q.push_back(1);
    q.push_back(9);
    q.push_back(5);
    list<int>::iterator i;
    for(i=q.begin();i!=q.end();i++)
        cout<<*i<<" ";

  //  cout<<q.end();

    return 0;
}
