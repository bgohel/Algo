//write 10 bytes in parents and take 5 bytes in child 1 and child 2
#include"header.h"
main()
{
	int p[2];
	pipe(p);
	int i;
	if(fork()==0)
	{
		char b[5];
		bzero(b,5);
		read(p[0],b,sizeof(b));
			printf("in c1 data..%s\n",b);


	}
	else
	{
		if(fork()==0)
		{
			char b[5];
		bzero(b,5);
			read(p[0],b,sizeof(b));
			printf("In c2 data..%s\n",b);

		}
		else
		{
			char a[10];
			printf("Enter the Data...\n");
			scanf("%s",a);
			write(p[1],a,strlen(a)+1);
		}


	}
}
