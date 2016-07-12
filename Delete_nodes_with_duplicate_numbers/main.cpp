#include <iostream>

using namespace std;


struct node
{
    int info;
    node *next;

};
 node *font=NULL;
 node *rear=NULL;

void push(int n)
{
    int i=0;
    while(i<n)
    {
    node *ptr;
    ptr=new node;
    cout<<"\nEnter info ";
    cin>>ptr->info;

    if(font==NULL)
    {
        font=ptr;
        rear=ptr;
        ptr->next=NULL;
    }

    else
    {
        rear->next=ptr;
        ptr->next=NULL;
        rear=ptr;
    }
    i++;
}
}
