#include<stdio.h>
#include<stdlib.h>

struct st
{
	struct st *left;
	int no;
	struct st *right;
};
typedef struct st TREE;
void inorder(TREE*);
void preorder(TREE*);
void postrder(TREE*);
TREE * search(TREE *,int);
void add_tree(TREE **,int);

int  main()
{
	TREE *head=0;
	char ch;
	int num;

	do{

		printf("Enter the data\n");
		scanf("%d",&num);
		add_tree(&head,num);
		printf("Do you want to continue...?\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
	
	printf("Data is as follows\n");
	inorder(head);


	TREE *p;
	p=search(head,5);
	
	if(p)
	{
	printf("searched ele add - %p and ele - %d\n",p,p->no);
	}
	

}



void add_tree(TREE **ptr,int n)
{

	if(*ptr==0)
	{
		*ptr=malloc(sizeof (TREE));

		(*ptr)->no=n;
		(*ptr)->left=0;
		(*ptr)->right=0;
	}
	else if((*ptr)->no > n)
		add_tree(&(*ptr)->left,n);
	else 
		add_tree(&(*ptr)->right,n);

}


TREE* search(TREE *ptr,int n)
{
	if(ptr==0)
	{
		printf("No records are present\n");
		return NULL;
	}
	else if((ptr)->no==n)
		return ptr;
	else if ((ptr)->no > n)
		return search(ptr->left,n);
	else
		return search(ptr->right,n);
}

void inorder(TREE *ptr)
{
	if(ptr)
	{
		inorder(ptr->left);
		printf(" %d ",ptr->no);
		inorder(ptr->right);
	}

}



void preorder(TREE* ptr)
{
        if(ptr)
        {
                printf(" %d ",ptr->no);
                preorder(ptr->left);
                preorder(ptr->right);
        }

}

void postorder(TREE* ptr)
{
        if(ptr)
        {
                postorder(ptr->left);
                postorder(ptr->right);
                printf(" %d ",ptr->no);
        }

}


