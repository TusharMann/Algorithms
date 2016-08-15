#include <iostream>
#include<queue>
#include<stack>

using namespace std;
int maxi;

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
		cout<<"\t"<<ptr->data;
		inorder(ptr->right);

	}

}

void preorder(struct node *ptr)
{
	if(ptr!=NULL)
	{
		cout<<"\t"<<ptr->data;
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

    cout<<"\n";
    cout<<root->data<<"\t";

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

void Inorder_without_recursion(node *root)
{

  stack<node *>s;
  node *current;
  bool done=true;
  if(root==NULL)
        return;

  s.push(root);
  current=root->left;
  cout<<"\n";

  while(done)
  {
      while(current!=NULL)
      {
          s.push(current);
          current=current->left;

      }

       if(!s.empty())
       {
        current=s.top();
        s.pop();
        cout<<"\t"<<current->data;
        current=current->right;
        }

        else
            done=false;

  }
}

void maxno(node *root)
{
    if(root)
    {
        if(root->data > maxi)
            maxi=root->data;

        maxno(root->left);
        maxno(root->right);

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
		cout<<"\n6.Inorder without resursion";
		cout<<"\n7.Maximum number in the tree ";
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

            case 6:Inorder_without_recursion(root);
                break;

            case 7:maxi=root->data;
                maxno(root);

                cout<<"\nMaximum number in the tree is "<<maxi;
                break;

			case 0:break;
			default:cout<<"\nEnter valid choice ";
		}
	}

		while(i!=0);



		return 0;

	}

