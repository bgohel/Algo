#include"header.h"
main()
{
	int fd,i;
	int a[5]={0,1,2,3,4};
	close(1);
	printf("pid=%d\n",getpid());
	fd=open("data",O_WRONLY|O_TRUNC|O_CREAT,0644);

	if(fd<0)
	{

		perror("OPEN");
		return;
	}
for(i=0;i<5;i++)
printf("%d ",a[i]);
printf("\n");
	printf("fd=%d\n",fd);
	printf("Hello world....\n");
}
