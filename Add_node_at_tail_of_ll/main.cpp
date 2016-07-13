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
        for(temp=head;temp->info!=NULL;temp=temp->next);

        temp->next=ptr;


     }

     return head;

 }


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
