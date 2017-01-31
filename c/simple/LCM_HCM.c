#include<stdio.h>
int main()
{
	int a,b,x,y;

	printf("Enter the two values for operation\n");
	scanf("%d%d",&x,&y);

	a=x,b=y;

	while(a!=b)
	{
		if(a<b)
			a=a+x;
		else
			b=b+y;


	}
	printf("LCM of two values are %d\n",a);
	a=x,b=y;	
	 while(a!=b)
        {
                if(a>b)
                        a=a-b;
                else
                        b=b-a;
        }

	printf("HCF of two values are %d\n",a);




}
