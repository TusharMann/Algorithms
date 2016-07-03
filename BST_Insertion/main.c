#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *lt,*rt;
};

struct node *root=NULL;

void add()
{
	struct node *ptr,*pre,*temp;
	ptr=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter info ");
	scanf("%d",&ptr->info);

	ptr->lt=NULL;
	ptr->rt=NULL;

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

			if(temp->info>ptr->info)
			temp=temp->lt;

			else
			temp=temp->rt;
		}

		if(pre->info>ptr->info)
		pre->lt=ptr;

		else
		pre->rt=ptr;

		printf("\nOne record added ");
	}

}

void inorder(struct node *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->lt);
		printf("\t%d",ptr->info);
		inorder(ptr->rt);

	}

}

void preorder(struct node *ptr)
{
	if(ptr!=NULL)
	{
		printf("\t%d",ptr->info);
		preorder(ptr->lt);
		preorder(ptr->rt);

	}

}

void postorder(struct node *ptr)
{
	if(ptr!=NULL)
	{
		postorder(ptr->lt);
		postorder(ptr->rt);
		printf("\t%d",ptr->info);
	}

}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i;

		printf("\n1.Add new node in BST ");
		printf("\n2.Preorder ");
		printf("\n3.Inorder ");
		printf("\n4.Postorder ");
		printf("\n0.Exit");

	do
	{
		printf("\nEnter your choice ");
		scanf("%d",&i);

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
			default:printf("\nEnter valid choice ");
		}
	}

		while(i!=0);



		return 0;

	}

