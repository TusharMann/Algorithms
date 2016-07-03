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
		return;
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

void inorder(node *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->lt);
		cout<<"\t"<<ptr->info;
		inorder(ptr->rt);

	}

}

void preorder(node *ptr)
{
	if(ptr!=NULL)
	{
		cout<<"\t"<<ptr->info;
		preorder(ptr->lt);
		preorder(ptr->rt);

	}

}

void postorder(node *ptr)
{
	if(ptr!=NULL)
	{
		postorder(ptr->lt);
		postorder(ptr->rt);
		cout<<"\t"<<ptr->info;
	}

}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i;
	do
	{
		cout<<"\n1.Add new node in BST ";
		cout<<"\n2.Preorder ";
		cout<<"\n3.Inorder ";
		cout<<"\n4.Postorder ";
		cout<<"\n0.Exit";
		cout<<"\nEnter your choice ";
		cin>>i;

		switch(i)
		{
			case 1:add();
				break;

			case 2:preorder(root);
				break;

			case 3:inorder(root);
				break;

			case 4:postorder(root);
				break;

			case 0:break;

			default:cout<<"\nEnter valid choice ";
		}
	}
        while(i!=0);



		return 0;

	}

