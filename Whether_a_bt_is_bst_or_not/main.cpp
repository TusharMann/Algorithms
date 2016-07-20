#include <iostream>
#include<queue>

using namespace std;
int arr[20];
int n=-1;

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

void inorder(node *root)
{
    if(root)
    {
        inorder(root->left);
        arr[++n]=root->data;
        inorder(root->right);

    }

}

bool isbst(node *root)
{
    if(root==NULL)
        return true;

    inorder(root);

    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
            return false;

    }

    return true;



}
node* newNode(int data)
{
  node *ptr = new node;
  ptr->data = data;
  ptr->left = NULL;
  ptr->right = NULL;

  return(ptr);
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
		int i;
		 bool val;

		cout<<"\n1.Add new node in BST ";
		cout<<"\n2.Add nodes in binary tree ";
		cout<<"\n3.Check if bst or not ";
        cout<<"\n0.Exit";

	do
	{
		cout<<"\nEnter your choice ";
		cin>>i;

		switch(i)
		{
			case 1:add();
				break;

            case 2:
                root = newNode(4);
                root->left        = newNode(2);
                root->right       = newNode(5);
                root->left->left  = newNode(1);
                root->left->right = newNode(3);

                break;

            case 3:
                val=isbst(root);
                if(val)
                    cout<<"\nThe given tree is bst ";
                else{
                    cout<<"\nThe given tree is not bst ";
                }

                break;


			case 0:break;
			default:cout<<"\nEnter valid choice ";
		}
	}

		while(i!=0);



		return 0;

	}

