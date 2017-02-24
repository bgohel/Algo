#include<stdio.h>
#include<stdlib.h>
struct st
{
	int no;

	struct st *next;
};
typedef struct st ST;
void middle(ST **);
void print(ST *);
int count(ST *);
void del_dup(ST **);
int main()
{
	ST *head=0;
	char ch;

	do{
//		add_begin(&head);
//		add_end(&head);
		middle(&head);
		printf("Do you want to enter the node again\n");
		scanf(" %c",&ch);
	}while(ch == 'y' || ch == 'Y');

	printf("Data is as per add_begin\n");
	print(head);
	del_dup(&head);
	printf("Data after sorted\n");
	print(head);

}

void middle(ST **ptr)
{
	ST *temp,*temp1;

	temp=malloc(sizeof (ST));

	printf("Enter the number\n");
	scanf("%d",&temp->no);

	if(*ptr == 0 || temp->no < (*ptr)->no)
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		temp1=*ptr;

		while(temp1)
		{
			if(temp1->next==0)
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}
			if(temp1->next->no > temp->no)
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}

			temp1=temp1->next;
		}
	}	
}

void print(ST *p)
{
	while(p)
	{
		printf("%d\n",p->no);
		p=p->next;
	}
}

int count(ST *p)
{
	int c=0;
	while(p)
	{
		c++;
		p=p->next;
	}
	return c;
}

void del_dup(ST **hptr)
{
	ST *ptr1,*ptr2,*dup;

	ptr1=*hptr;

	while(ptr1!=NULL && ptr1->next!=NULL)
	{
		ptr2=ptr1;

		while(ptr2->next!=NULL)
		{
			//compare the current and next node no
			if(ptr1->no==ptr2->next->no)
			{
				dup=ptr2->next;
				ptr2->next=ptr2->next->next;
				free(dup);
			}
			//if not compared go ahead
			else
			{
				ptr2=ptr2->next;

			}
		}
		ptr1=ptr1->next;
	}

}
