#include"header.h"
void * thread_1(void *p)
{
	char a[20];
	int fd;
	fd=open("f3",O_WRONLY);
	while(1)
	{
		scanf("%s",a);
		write(fd,a,strlen(a)+1);
	}
}



void * thread_2(void *p)
{
	char a[20];
	int fd;
	fd=open("f3",O_RDONLY);
	while(1)
	{
		read(fd,a,sizeof(a));
		printf("%s\n",a);
	}
}

int main()
{
	pthread_t t1,t2;
	mkfifo("f3",0644);

	pthread_create(&t1,NULL,thread_1,NULL);
	pthread_create(&t2,NULL,thread_2,NULL);
	while(1);
}
