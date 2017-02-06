///////To avoid sleep use two pipes
#include"header.h"
main()
{
	int p[2],p1[2];
	pipe(p);
	pipe(p1);
int i;
	if(fork()==0)
	{
		char b[20];
		read(p[0],b,sizeof(b));
		for(i=0;b[i];i++)
		if(b[i]>='a' && b[i]<='z')
		b[i]=b[i]-32;
		write(p1[1],b,strlen(b)+1);
		

	}
	else
	{
		char a[20]="BHARGAV";
		printf("Enter the Data...\n");
		scanf("%s",a);
		write(p[1],a,strlen(a)+1);
//	sleep(1);
		read(p1[0],a,sizeof(a));
		printf("data..%s\n",a);


	}


}
