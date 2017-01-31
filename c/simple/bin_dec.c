#include<stdio.h>
int main()
{
	int num,n;

	int dec=0,rem,j=1,i;

	printf("Enter the number\n");
	scanf("%d",&num);

	n=num;
	while(n)
	{
		rem=n%10;
		dec=dec+rem*j;
		j=j*2;
		n=n/10;
	}

	printf("Binary of num - %d to dec is - %d \n",num,dec);


}
