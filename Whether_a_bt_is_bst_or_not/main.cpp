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

bool isbst(node *root)
{
    queue<node *> q;
    if(root==NULL)
        return true;

    if((root->left!=NULL&&root->left->data > root->data) || (root->right!=NULL&&root->right->data < root->data))
        return false;

    else{
        if(root->left!=NULL)
            q.push(root->left);

        if(root->right!=NULL)
            q.push(root->right);

        while(!q.empty())
        {
           node *ptr;
           ptr=q.front();
           q.pop();

           if(ptr->left->data > ptr->data || ptr->right->data < ptr->data)
                return false;

            if(ptr->left!=NULL)
            q.push(ptr->left);

            if(ptr->right!=NULL)
            q.push(ptr->right);
       }



    }


    return true;



}



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
		int i;
		 bool val;

		cout<<"\n1.Add new node in BST ";
		cout<<"\n2.Check if bst or not ";
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

