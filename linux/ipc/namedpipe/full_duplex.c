#include"header.h"

int main()
{

	int fd1,fd2;
	mkfifo("f1",0644);
	mkfifo("f2",0644);
	perror("mkfifo");

	fd1=open("f1",O_WRONLY);
	fd2=open("f2",O_RDONLY);

	char a[20],b[20];
	if(fork()==0)
	{
		while(1)
		{
			read(fd2,b,sizeof(b));
			printf("%s\n",b);
		}
	}
	else
	{
		while(1)
		{
			printf("Enter the data ");
			scanf("%s\n",a);
			write(fd1,a,strlen(a)+1);
		}
	}
}
