#include<stdio.h>
char* ustrstr(char*, char*);
int main()
{
	char m[20],s[20];

	printf("Enter the substring and main string\n");
	scanf("%s%s",m,s);

	char *p=ustrstr(m,s);

	printf("substring found in main string is as follows\n");
	
	if(p!=0)
		printf("%s\n",p);
	else
		printf("not found\n");

}

char * ustrstr(char * m, char* s)
{
	int i,j;
	for(i=0;m[i];i++)
	{
		if(m[i]==s[0])
		{

			for(j=1;s[j];j++)
				if(s[j]!=m[i+j])
					break;

			if(s[j]=='\0')
				return (m+i);

		}


	}

	return 0;
}

