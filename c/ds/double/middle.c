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
DLL *headptr;//by default 0
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


	if(headptr==0)
	{
		headptr=temp;
	}
	else if((temp->n)<(headptr->n))
	{
		temp->next=headptr;
		headptr->prev=temp;
		headptr=temp;
	}
	else
	{
		temp1=headptr;
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
	ptr=headptr;
	while(ptr)
	{

		printf("%d ",ptr->n);
		ptr=ptr->next;
	}
	printf("\n");
}

