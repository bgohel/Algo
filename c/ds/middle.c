#include<stdio.h>
#include<stdlib.h>
struct A
{
	int rollno;
//	char name[20];
//	float marks;
	struct A *next;
};
typedef struct A ST;
void add_beg(ST **);
void add_middle(ST **);
void add_end(ST **);
void print(ST *);
void save(ST *);
void del_all(ST**);
int count(ST *);
main()
{
	char ch;
	ST *headptr=0;
	int c=0;
	do
	{
		//add_beg(&headptr);
		//add_end(&headptr);
		add_middle(&headptr);
		printf("Do you want to continue or not....(y/Y)?");
		scanf(" %c",&ch);
	}while(ch=='y'||ch=='Y');

//	c=count(headptr);
//	printf("count nodes=%d\n",c);
	print(headptr);
	del_all(&headptr);
	print(headptr);
//	save(headptr);
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

void add_beg(ST **ptr)
{
	ST *temp;
	temp=malloc(sizeof(ST));
	printf("Enter the Roll no...\n");
	scanf("%d",&temp->rollno);
//	printf("Enter the name...\n");
//	scanf("%s",temp->name);
//	printf("Enter the marks...\n");
//	scanf("%f",&temp->marks);

	temp->next=*ptr;
	*ptr=temp;
}
void print(ST *p)
{
	while(p)
	{
		printf("%d\n",p->rollno);
		//printf("%d %s %f\n",p->rollno,p->name,p->marks);
		p=p->next;
	}
}



void add_end(ST **ptr)
{
	ST *temp,*temp1;


	temp=malloc(sizeof(ST));

	printf("Enter the Roll no...\n");
	scanf("%d",&temp->rollno);
	printf("Enter the name...\n");
	scanf("%s",temp->name);
	printf("Enter the marks...\n");
	scanf("%f",&temp->marks);
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

void save(ST *ptr)
{
	FILE *fp;
	fp=fopen("data","w");
	while(ptr)
	{
		fprintf(fp,"%d %s %f",ptr->rollno,ptr->name,ptr->marks);
		ptr=ptr->next;
	}
	fclose(fp);
}

void add_middle(ST **ptr)
{
	ST *temp,*temp1;
	temp=malloc(sizeof(ST));
	printf("Enter the Roll no...\n");
	scanf("%d",&temp->rollno);
	printf("Enter the name...\n");
	scanf("%s",temp->name);
	printf("Enter the marks...\n");
	scanf("%f",&temp->marks);

	if(*ptr==0 || temp->marks < (*ptr)->marks)                   
	{
		temp->next=*ptr;
		*ptr=temp;
	}
	else
	{
		temp1=*ptr;//Always>>>>>>>>temp1=A	

		while(temp1)
		{
			if(temp1->next==0)
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}

			if(temp1->next->marks > temp->marks)
			{
				temp->next=temp1->next;
				temp1->next=temp;
				break;
			}
			temp1=temp1->next;
		}
	}
}

void del_all(ST **ptr)
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

