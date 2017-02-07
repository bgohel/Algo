#include"header.h"

int main()
{

	int fd1,fd2;
	mkfifo("f1",0644);
	mkfifo("f2",0644);
	perror("mkfifo");

	fd1=open("f1",O_RDONLY);
	fd2=open("f2",O_WRONLY);

	char a[20],b[20];
	if(fork()==0)
	{
		while(1)
		{
			read(fd1,a,sizeof(a));
			printf("%s\n",a);
		}
	}
	else
	{
		while(1)
		{
			printf("Enter the data ");
			scanf("%s\n",b);
			write(fd2,b,strlen(b)+1);
		}
	}
}
