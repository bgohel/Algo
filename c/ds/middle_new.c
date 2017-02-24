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
void delall(ST **);
void recursiveReverse(ST **);
void rec_rev(ST **);
void printNthFromLast(ST *, int);
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
	//recursiveReverse(&head);
//	rec_rev(&head);
//	printf("nodes in this data structure is - %d\n",count(head));

//	delall(&head);
//	printf("Data After del_all\n");
	printf("Data At node\n");
	print(head);
	printNthFromLast(head,2);

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
	ST* first,*rest;
	
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


void rec_rev(ST **ptr)
{
	ST* first,*rest;

	if(*ptr==0)
		return;

	first=*ptr;
	rest=first->next;

	if(rest==0)
		return;

	rec_rev(&rest);

	first->next->next=first;
	first->next=NULL;


	*ptr=rest;

}
void delall(ST **ptr)
{
        ST *cur,*nxt;
        cur =*ptr;
        while(cur)
        {
                nxt=cur->next;
                free(cur);
                cur=nxt;
        }

        *ptr=NULL;
}

void printNthFromLast(ST *head, int n)
{
        ST *main_ptr = head;
        ST *ref_ptr = head;

        int count = 0,p=0;
        if(head != NULL)
        {
                while( count < n )
                {
                        if(ref_ptr == NULL)
                        {
                                printf("%d is greater than the no. of "
                                                "nodes in list", n);
                                return;
                        }
			
			//point the referencr pointer to the next of n -> if n = 4 , ref at 5 pos from the beg
                        ref_ptr = ref_ptr->next;
                        count++;
                } /* End of while*/


              printf("ref-data %d\n ",ref_ptr->no);
			
			//in next while loop
			//shift the main ptr as per the ref , and then print the data from the beg only 
			//ref will reach at the end here

                while(ref_ptr != NULL)
                {
                        p++;
                        main_ptr = main_ptr->next;
                        ref_ptr = ref_ptr->next;
                }
                printf("p - %d\n",p);
                printf("Node no. %d from last is %d ",n, main_ptr->no);
        }
}




