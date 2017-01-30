#include<stdio.h>
#include<stdlib.h>
#define N 5
int sp=0;
struct st
{
	int no;

	struct st *next;
};
typedef struct st ST;

void push(ST **);
void pop(ST **);

void print(ST *);
int main()
{
	ST *head=0;
	int op;
	while(1)
	{	
		printf("Choose optipns \n 1) push 2) pop 3)print 4) exit\n");
			scanf("%d",&op);

		switch(op)
		{
			case 1:push(&head);
			       break;
			case 2:pop(&head);
			       break;
			case 3:print(head);
			       break;
			case 4:return;
			default: printf("Wrong Input\n");
		}

	}
}


void push(ST **ptr)
{

	if(sp==N)
	{
		printf("Stack is overflow\n");
		return;
	}
	else
	{
		ST *temp,*temp1;

		temp=malloc(sizeof (ST));

		printf("Enter the number\n");
		scanf("%d",&temp->no);

		if(*ptr==0)
		{
			temp->next=*ptr;
			*ptr=temp;
		}
		else
		{
			temp1=*ptr;

			while(temp1->next)
				temp1=temp1->next;

			temp->next=temp1->next;
			temp1->next=temp;
		}
	sp++;
	}
}


void pop(ST **ptr)
{
	ST *temp,*temp1;
	if(sp==0)
	{
		printf("stack is under flow\n");
		return;
	}
	else
	{
		temp=*ptr;
		while(temp->next)
		{
			temp1=temp;
			temp=temp->next;
		}
		printf("num is - %d\n",temp->no);
		temp1->next=temp->next;
		free(temp);
		
	sp--;
	}

}



void print(ST *p)
{
	if(sp==0)
	{
	printf("No records\n");
	return;
	}
	while(p)
	{
		printf("%d\n",p->no);
		p=p->next;
	}
}

