#include <iostream>

using namespace std;

struct Node
{
    int info;
    Node *next;
};

 Node *head=NULL;

 Node* Insert(Node *head,int data)
 {
     Node *ptr=new Node;
     ptr->info=data;
     ptr->next=NULL;

     if(head==NULL)
     {
        head=ptr;

     }

     else{
        Node *temp;
        for(temp=head;temp->next!=NULL;temp=temp->next);

        temp->next=ptr;


     }

     return head;

 }


int main()
{
    head=Insert(head,8);
    head=Insert(head,5);
    head=Insert(head,2);
    head=Insert(head,6);
    head=Insert(head,1);

    Node *ptr;
    for(ptr=head;ptr!=NULL;ptr=ptr->next)
        cout<<ptr->info<<" ";

    return 0;
}
