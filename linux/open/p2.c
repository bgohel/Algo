#include"header.h"
main()
{
	int fd;
	close(1);
	printf("pid=%d\n",getpid());
	fd=open("data",O_WRONLY|O_TRUNC|O_CREAT,0644);

	if(fd<0)
	{

		perror("OPEN");
		return;
	}

	printf("fd=%d\n",fd);
	printf("Hello world....\n");
}
