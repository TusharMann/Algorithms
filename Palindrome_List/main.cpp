#include <iostream>

using namespace std;


struct node
{
    int info;
    struct node *next;

};
 struct node *front;
 struct node *rear;

void push()
{
    struct node *ptr;
    ptr=(struct node *)malloc(sizeof(struct node));
    printf("\nEnter info ");
    scanf("%d",&ptr->info);

    if(front==NULL)
    {
        front=ptr;
        rear=ptr;
        ptr->next=NULL;
    }

    else
    {
        rear->next=ptr;
        ptr->next=NULL;
        rear=ptr;
    }
    printf("\nOne record Added ");
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
