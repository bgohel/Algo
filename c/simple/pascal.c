#include<stdio.h>
int fact(int);
long comb(int ,int);
int main()
{
	int num,i,j,k;

	printf("Enter the number of raws\n");
	scanf("%d",&num);

	for(i=0;i<num;i++)
	{
		for(k=num-2;k>=i;k--)
			printf(" ");
		for(j=0;j<=i;j++)
			printf(" %ld",comb(i,j));

		printf("\n");
	}
}

long comb(int n,int r)
{
	long c;

	c=fact(n)/(fact(r)*fact(n-r));
	return c;

}


int fact(int n)
{
	int f=1;
	int i;
	while(n)
	{
		f=f*n;
		n--;
	}
	return f;
}
