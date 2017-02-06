#include"header.h"
main()
{
	int fd1;
 char a[20];
	fd1=open("def",O_RDONLY);

	if(fd1<0)
	{

		perror("OPEN");
		return;
	}
	printf("fd1=%d\n",fd1);
read(fd1,a,strlen(a)+1);
printf("%s\n",a);
	printf("don....\n");
}
