#include<stdio.h>
#include<setjmp.h>
jmp_buf v;
int sum(int ,int);
int sub(int ,int);
int mul(int ,int);
int div(int ,int);
main()
{
	int n1=20,n2=10,n3,r;
	int op;
	printf("Enter the nos...\n");
	scanf("%d %d",&n1,&n2);

	r=setjmp(v);
if(r==3)
printf("Error in mul....\n");
else if(r==4)
printf("Error in div....\n");

	printf("Enter the op...\n");
	scanf("%d",&op);
if(op==1)
	{
		printf("summation...\n");
		n3=sum(n1,n2);
		printf("n3=%d\n",n3);
	}

	else if(op==2)
	{
		printf("subtrction...\n");
		n3=sub(n1,n2);
		printf("n3=%d\n",n3);
	}

	else if(op==3)
	{
		printf("multiplication...\n");
		n3=mul(n1,n2);
		printf("n3=%d\n",n3);
	}

	else if(op==4)
	{
		printf("division...\n");
		n3=div(n1,n2);
		printf("n3=%d\n",n3);
	}

	else 
		printf("wrong option...\n");
}

int sum(int i,int j)
{return (i+j);}

int sub(int i,int j)
{return (i-j);}

int mul(int i,int j)
{
if(i==0||j==0)
longjmp(v,3);
return (i*j);
}

int div(int i,int j)
{
if(j==0)
longjmp(v,4);
return (i/j);}

