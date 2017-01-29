#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	int i,j,k,l,c=0;
	printf("Enter the string\n");
	gets(s);
	printf("%s\n",s);

	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		{
			c++;

			if(c>1)
			{
				while(c)
				{
					for(j=i;s[j];j++)
						s[j]=s[j+1];

					c--;	
				}
			}
		}
	}

	printf("%s\n",s);
}
