#include<stdio.h>
int main()
{
	int num,n,i=2,temp;

	printf("Enter the number \n");
	scanf("%d",&num);

	temp=num;

	while(i<=temp)
	{
		if(temp%i==0)
		{
			printf("%d\n",i);
			temp=temp/i;
		}
		i++;

	}

}
