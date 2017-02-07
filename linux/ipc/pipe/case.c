//1]send data to the child from parent
//2]convert data into child and send it to the parent with sleep
#include"header.h"
main()
{
	int p[2];
	pipe(p);
	int i;
	if(fork()==0)
	{
		char b[20];
		read(p[0],b,sizeof(b));
		for(i=0;b[i];i++)
		if(b[i]>='a' && b[i]<='z')
		b[i]=b[i]-32;
		write(p[1],b,strlen(b)+1);
	}
	else
	{
		char a[20]="BHARGAV";
		printf("Enter the Data...\n");
		scanf("%s",a);
		write(p[1],a,strlen(a)+1);
		sleep(1);
		read(p[0],a,sizeof(a));
		printf("data..%s\n",a);
	}
}
