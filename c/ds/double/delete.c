#include<stdio.h>
#include<stdlib.h>
struct st 
{
	struct st *prev;
	int n;
	struct st *next;
};
typedef struct st DLL;
void add_middle(void);
void print(void);
void delete_node(int);
DLL *hptr;//by default 0
main()
{
	char ch;

	do
	{
		add_middle();
		printf("do you Want another node........(y/Y)?\n");
		scanf(" %c",&ch);

	}while(ch=='y'||ch=='Y');

	//	add_beg();
	//	add_beg();
	//	add_beg();
	printf("__________________________________________\n");
	print();
	
	delete_node(20);
	print();
	
}

void add_middle(void)
{
	DLL *temp,*temp1;

	temp=malloc(sizeof(DLL));
	///////////////////////////////////////////////////////////
	printf("Enter the num...\n");
	scanf("%d",&temp->n);

	temp->next=0;
	temp->prev=0;
	///////////////////////////////////////////////////////////

	if(hptr==0)
	{
		hptr=temp;
	}
	else if((temp->n)<(hptr->n))
	{
		temp->next=hptr;
		hptr->prev=temp;
		hptr=temp;
	}
	else
	{
		temp1=hptr;
		while(temp1)
		{
			if(temp1->next==0)
			{
				temp1->next=temp;
				temp->prev=temp1;
				break;
			}
			if((temp1->next->n)>(temp->n))
			{
				temp->prev=temp1;
				temp->next=temp1->next;;
				temp1->next->prev=temp;
				temp1->next=temp;
				break;
			}
			temp1=temp1->next;
		}
	}
}

void print(void)
{
	DLL *ptr;
	ptr=hptr;
	while(ptr)
	{

		printf("%d ",ptr->n);
		ptr=ptr->next;
	}
	printf("\n");
}

void delete_node(int no)
{
	DLL *temp,*temp1;
	temp=hptr;

	while(temp)
	{
		if(temp->n==no)
		{
			if(temp==hptr)
			{
				hptr=temp->next;
				free(temp);
				return;
			}
			else if (temp->next==0)
			{
				temp1->next=temp->next;
				free(temp);
				return;
			}
			else
			{
				temp->next->prev=temp1->next;
				temp->prev->next=temp->next;
				free(temp);
				return;
			}
		}
		temp1=temp;
		temp=temp->next;
	}
}
