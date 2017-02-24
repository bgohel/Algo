//delete dup char from the string

#include<stdio.h>
main()

{
	char s[10];
	int i,j,k;
	
	printf("Enter the String...\n");
	scanf("%s",s);

	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];)
		{
		if(s[i]==s[j])
		{
			for(k=j;s[k];k++)
			s[k]=s[k+1];
			
			i--;
		}
		else
		j++;
		}
	}

	printf("%s\n",s);

}
