//Add new string into the main string

#include<stdio.h>
main()

{
	char s[20],n[10];
	int i,j;
	
	printf("Enter the String...\n");
	scanf("%s",s);

	printf("Enter the new string...\n");
	scanf("%s",n);

	for(i=0;s[i];i++);
	for(j=0;n[j];j++,i++)	
	s[i]=n[j];
	s[i]='\0';


	printf("%s\n",s);










}
