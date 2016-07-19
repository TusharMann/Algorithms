#include<iostream>

using namespace std;

struct node
{
	int info;
	node *lt,*rt;
};

 node *root=NULL;

void add()
{
    node *ptr,*pre,*temp;
	ptr=new node;
	cout<<"\nEnter info ";
	cin>>ptr->info;

	ptr->lt=NULL;
	ptr->rt=NULL;

	if(root==NULL)
	{
		root=ptr;

	}

	else
	{
		temp=root;

		while(temp!=NULL)
		{
			pre=temp;

			if(temp->info>ptr->info)
			temp=temp->lt;

			else
			temp=temp->rt;
		}

		if(pre->info>ptr->info)
		pre->lt=ptr;

		else
		pre->rt=ptr;

		cout<<"\nOne record added ";
	}

}

bool printancestor(node *root,int target)
{
    if(root==NULL)
        return false;

    if(root->info==target)
    {
       //cout<<"\n"<<root->info;
       return true;
    }


    if(printancestor(root->lt,target)||printancestor(root->rt,target))
    {
        cout<<"\t"<<root->info;
        return true;
    }

    return false;

}





/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i;

		cout<<"\n1.Add new node in BST ";
		cout<<"\n2.Find ancestors of given node";
		cout<<"\n0.Exit";

	do
	{
		cout<<"\nEnter your choice ";
		cin>>i;

		switch(i)
		{
			case 1:add();
				break;

            case 2:int n;
                cout<<"\nEnter the node whose ancestor you want to see ";
                cin>>n;

                printancestor(root,n);

			case 0:break;

			default:cout<<"\nEnter valid choice ";
		}
	}
        while(i!=0);



		return 0;

	}

