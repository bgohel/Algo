#include<stdio.h>
#include<stdlib.h>
struct A
{
	int no;
	struct A *next;
};

typedef struct A ST;
void add_beg(ST **);
void print(ST *);
///////////////////////////////////////////////////////////////
main()
{
	ST * headptr=0;
	char ch;

	do
	{
		add_beg(&headptr);
		pritnf("Do u Want another node (y/Y)?\n");
		scanf(" %c",&ch);
	}while(ch=='y' || ch=='Y');
		print(headptr);
}

		void add_beg(ST** ptr)	
	{
		ST *temp;
		temp=malloc(sizeof(ST));

		printf("add no..\n");
		scanf("%d",&temp->no);

		temp->next=*ptr;
		*ptr=temp;

	}
	void print(ST *p)
	{
		while(p)
		{
			printf("%d\n",p->no);
			p=p->next;
		}
	}


