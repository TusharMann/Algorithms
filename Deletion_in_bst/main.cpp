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


node* findmin(node *current)
{
    while(current->lt!=NULL)
        current=current->lt;

    return current;

}


node* delnode(node *root,int key)
{
    if(root==NULL)
        return root;
    else if(key<root->info)
        root->lt=delnode(root->lt,key);
    else if(key>root->info)
        root->rt=delnode(root->rt,key);

    else
    {
        node *temp;

        if(root->lt==NULL && root->rt==NULL)
        {
            delete(root);
            return NULL;

        }

        else if(root->lt==NULL)
        {
            temp=root;
            root=root->rt;
            delete(temp);
            return root;

        }


        else if(root->rt==NULL)
        {
            temp=root;
            root=root->lt;
            delete(temp);
            return root;

        }

        else
        {
            temp=findmin(root->rt);
            root->info=temp->info;
            root->rt=delnode(root->rt,temp->info);
            return root;

        }
    }

    return root;


}

void del()
{
    int n;
    cout<<"\nEnter the node that you want to delete ";
    cin>>n;

    root=delnode(root,n);
    cout<<"\nNode deleted successfully ";



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

		cout<<"\n1.Add new node in BST ";
		cout<<"\n2.Delete a node in BST ";
		cout<<"\n3.Preorder ";
		cout<<"\n4.Inorder ";
		cout<<"\n5.Postorder ";
		cout<<"\n0.Exit";

	do
	{
		cout<<"\nEnter your choice ";
		cin>>i;

		switch(i)
		{
			case 1:add();
				break;

            case 2:del();
                    break;

			case 3:preorder(root);
				break;

			case 4:inorder(root);
				break;

			case 5:postorder(root);
				break;

			case 0:break;

			default:cout<<"\nEnter valid choice ";
		}
	}
        while(i!=0);



		return 0;

	}

