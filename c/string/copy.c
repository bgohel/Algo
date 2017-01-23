//copy the string
#include<stdio.h>

main()
{

char s[10],d[10];
char *p;
int i;
printf("Enter the String\n");
scanf("%s",s);

p=s;
for(i=0;*p;i++)
d[i]=*p++;

d[i]=*p++;
//d[i]='\0';


printf("After the ...%s\n",s);
printf("After the ...%s\n",d);
















}
