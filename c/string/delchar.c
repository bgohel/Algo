//delete char from the string

#include<stdio.h>
main()

{
	char s[10],ch;
	int i,j;
	
	printf("Enter the String...\n");
	scanf("%s",s);

	printf("Enter the char...\n");
	scanf(" %c",&ch);

	for(i=0;s[i];i++)
	{
		if(s[i]==ch)
		{
			for(j=i;s[j];j++)
			{
			s[j]=s[j+1];
			}
			i--;
		}
		
	}

	printf("%s\n",s);










}
