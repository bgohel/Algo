//Reverse  print the String


#include<stdio.h>
main()
{
	char s[10];
	int i;
	printf("Enter the String\n");
	scanf("%s",s);

	for(i=0;s[i];i++)
		printf("%c",s[i]);

	printf("\n");
	for(i=0;s[i];i++);

	for(i=i-1;i>=0;i--)
		printf("%c",s[i]);

	printf("\n");












}
