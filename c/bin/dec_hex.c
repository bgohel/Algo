#include<stdio.h>
int main()
{
	char hex[30];
	int num,temp,i=0,rem;


	printf("Enter the number\n");
	scanf("%d",&num);

	temp=num;

	while(temp)
	{
		rem=temp%16;

		if(rem<10)
			rem=rem+48;
		else
			rem=rem+55;

		hex[i++]=rem;
		temp=temp/16;

	}

	for(i=i-1;i>=0;i--)
		printf("%c",hex[i]);
		printf("\n");
}
