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

int palindrome()
{
    node *ptr,*pre,*temp;
    int i=1;

    for(ptr=font,temp=rear,pre=rear;ptr!=pre && ptr!=NULL;temp=pre)
    {
        if(ptr->info == temp->info)
        {
            i=1;
            for(pre=font;pre->next!=temp;pre=pre->next);

            ptr=ptr->next;

        }

        else{
            i=0 ;
            return i;
        }
    }

    return i;
}


int main()
{
    int n;

    cout << "Enter the number of nodes that you want to enter" << endl;
    cin>>n;
    push(n);

    int j=palindrome();
    if(j==1)
    {
        cout<<"Palindrome list ";
    }

    else{
        cout<<"Not a palindrome list";
    }



    return 0;
}
