#include<stdio.h>

main()
{

char s[10],ch;
int i,j;

printf("Enter the String\n");
scanf("%s",s);
printf("Before..%s\n",s);

for(i=0;s[i];i++);
for(j=0,i=i-1;i>j;j++,i--)
{

ch=s[i];
s[i]=s[j];
s[j]=ch;


}

printf("After the ...%s\n",s);

















}
