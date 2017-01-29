#include<stdio.h>
int L = 5;
static int a[5];

int main()
{
	int i=0,op;
	char ch;
	printf("Enter the option \n");
	scanf("%d",&op);

	switch(op)
	{
		case 1:
			do
			{
				if(i==L)
				{
					printf("Stack is overflow\n");
					break;
				}
				printf("Enter the data\n");
				scanf("%d",&a[i++]);
				
				printf("Do you want push..?\n");
				scanf(" %c",&ch);
			}while(ch == 'y' || ch == 'Y');

		case 2:
			do
			{
				i--;
				if(i==-1)
				{
					printf("Stack is Underflow\n");
					break;
				}
				printf("a[%d]-%d\n",i,a[i]);
				printf("Do you want to pop..?\n");
				scanf(" %c",&ch);
			}while(ch == 'y' || ch == 'Y');

		case 3:
			exit(0);
		default : printf("wrong Input\n");

	}


}
