#include"header.h"
main()
{
	int fd;
 char a[20];
	printf("pid=%d\n",getpid());
	fd=open("data",O_RDONLY);

	if(fd<0)
	{

		perror("OPEN");
		return;
	}
	printf("fd=%d\n",fd);
printf("\n");
//bzero(a,sizeof(a));
memset(a,'z',sizeof(a));
read(fd,a,15);
printf("%s\n",a);
	printf("Hello world....\n");
}
