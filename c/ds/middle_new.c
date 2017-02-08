#include<stdio.h>
#include<stdlib.h>
struct st
{
	int no;

	struct st *next;
};
typedef struct st ST;

void add_begin(ST **);
void add_end(ST **);
void middle(ST **);
void print(ST *);
void delete(ST **,int);
int count(ST *);
void del_all(ST **);
void recursiveReverse(ST **);
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
	
//	printf("Data after delete\n");
//	delete(&head,30);
//	print(head);
	
//	printf("nodes in this data structure is - %d\n",count(head));
//	del_all(&head);
	recursiveReverse(&head);
	printf("nodes in this data structure is - %d\n",count(head));
	print(head);

}

void add_begin(ST **ptr)
{
	ST *temp;

	temp=malloc(sizeof (ST));

	printf("Enter the number\n");
	scanf("%d",&temp->no);

	temp->next=*ptr;
	*ptr=temp;
}

void add_end(ST **ptr)
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

void delete(ST **ptr,int n)
{
	ST *temp,*temp1;
	temp=*ptr;
	while(temp)
	{
		if(temp->no==n)
		{
			if(temp==*ptr)
			{
				*ptr=temp->next;
				free(temp);
				return;
			}
			else
			{
				temp1->next=temp->next;
				free(temp);
				return;
			}

		}
		temp1=temp;
		temp=temp->next;

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

void del_all(ST **ptr)
{
	ST *temp;
	while(*ptr)
	{
		temp=*ptr;
		*ptr=temp->next;
		free(temp);
	}

}

void recursiveReverse(ST ** head_ref)
{
	ST* first;
	ST* rest;
	
	/* empty list */
	if (*head_ref == NULL)
	return; 

	/* suppose first = {1, 2, 3}, rest = {2, 3} */
	first = *head_ref; 
	rest = first->next;

	/* List has only one node */
	if (rest == NULL)
	return; 

	/* reverse the rest list and put the first element at the end */
	recursiveReverse(&rest);
	printf(" f1 - %d\n",first->no);
	first->next->next = first; 
	
	/* tricky step -- see the diagram */
	first->next = NULL;		 

	/* fix the head pointer */
	*head_ref = rest;			 
}

