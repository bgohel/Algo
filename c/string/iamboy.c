#include<stdio.h>
#include<string.h>
char * strrev(char*);
int main()
{
	char s[]="I am a  Good BOY";
	char temp,*p;
	int i,j,k,l;

	printf("%s\n",s);

//	p=strrev(s);
//	printf("%s\n",s);
	
	for(i=0;s[i];i++)
	{
		if(s[i]==' ')
		{
			for(j=i+1;s[j]!=' ' && s[j]!='\0';j++);
			printf("%d\n",j);
			for(l=j-1,k=i+1;l>k;l--,k++)
			{
				temp=s[l];
				s[l]=s[k];
				s[k]=temp;
			}

		}
	}
	
	printf("%s\n",s);
}


char * strrev(char *s)
{
	int i,j,k;
	char temp;
	for(i=0;s[i];i++);
	for (i=i-1,j=0;i>j;i--,j++)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	return s;
}
