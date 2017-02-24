#include<stdio.h>
#include<stdlib.h>
struct st 
{
	struct st *prev;
	int n;
	struct st *next;
};
typedef struct st DLL;
void add_beg(void);
void print(void);
DLL *headptr;//by default 0
main()
{
	char ch;

	do
	{
		add_beg();

		printf("do you Want another node........(y/Y)?");
		scanf(" %c",&ch);

	}while(ch=='y'||ch=='Y');

	//	add_beg();
	//	add_beg();
	//	add_beg();

	print();
	printf("__________________________________________\n");
	print();

}

void add_beg(void)
{
	DLL *temp;

	temp=malloc(sizeof(DLL));
	///////////////////////////////////////////////////////////
	printf("Enter the num...\n");
	scanf("%d",&temp->n);

	temp->next=0;
	temp->prev=0;
	///////////////////////////////////////////////////////////

	if(headptr==0)
		headptr=temp;
	else
	{
		temp->next=headptr;
		headptr->prev=temp;
		headptr=temp;
	}
}

void print(void)
{
	DLL *ptr;
	ptr=headptr;
	while(ptr)
	{

		printf("%d ",ptr->n);
		ptr=ptr->next;
	}
	printf("\n");
}

