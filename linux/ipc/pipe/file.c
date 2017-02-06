//take the data from one file
// write the data into pipe
//readthe data from pipe
//and print 
#include"header.h"
main()
{
	char s[20];
	int p[2];
	pipe(p);
	int fd,fd1;
	fd=open("data",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return;
	}

	if(fork()==0)
	{
		char b[15];
		bzero(s,sizeof(s));
		read(p[0],b,sizeof(b));
		printf("IN child %s\n",b);
		fd1=open("data1",O_WRONLY|O_TRUNC|O_CREAT,0644);
		write(fd1,b,sizeof(b));
	}
	else
	{
		char a[15];
		bzero(a,sizeof(a));
		read(fd,a,sizeof(a));
		printf("In parent...%s\n",a);
		write(p[1],a,strlen(a)+1);
	}
}
