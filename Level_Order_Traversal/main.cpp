#include <iostream>
#include<queue>

using namespace std;

struct node
{
	int data;
    node *left,*right;
};

struct node *root=NULL;

void add()
{
    node *ptr,*pre,*temp;
	ptr=new node;
    cout<<"\nEnter info ";
	cin>>ptr->data;

	ptr->left=NULL;
	ptr->right=NULL;

	if(root==NULL)
	{
		root=ptr;

	}

	else
	{
		temp=root;
		pre=root;

		while(temp!=NULL)
		{
			pre=temp;

			if(temp->data>ptr->data)
			temp=temp->left;

			else
			temp=temp->right;
		}

		if(pre->data>ptr->data)
		pre->left=ptr;

		else
		pre->right=ptr;

		cout<<"\nOne record added";
	}

}

void inorder(node *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		cout<<ptr->data;
		inorder(ptr->right);

	}

}

void preorder(struct node *ptr)
{
	if(ptr!=NULL)
	{
		cout<<ptr->data;
		preorder(ptr->left);
		preorder(ptr->right);

	}

}

void postorder(struct node *ptr)
{
	if(ptr!=NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
        cout<<"\t"<<ptr->data;
	}

}

void LevelOrder(node *root)
{
    queue<node *> q;

    if(root==NULL)
        return;

    else{

    cout<<root->data<<" ";

    if(root->left!=NULL)
        q.push(root->left);

    if(root->right!=NULL)
        q.push(root->right);

    while(!q.empty())
    {
        node *ptr=q.front();
        cout<<ptr->data<<" ";
        q.pop();

    if(ptr->left!=NULL)
        q.push(ptr->left);

    if(ptr->right!=NULL)
        q.push(ptr->right);

    }

  }

}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
		int i;

		cout<<"\n1.Add new node in BST ";
        cout<<"\n2.Preorder ";
		cout<<"\n3.Inorder ";
		cout<<"\n4.Postorder ";
		cout<<"\n5.Level Order Traversal";
		cout<<"\n0.Exit";

	do
	{
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

            case 5:LevelOrder(root);
                break;

			case 0:break;
			default:cout<<"\nEnter valid choice ";
		}
	}

		while(i!=0);



		return 0;

	}

