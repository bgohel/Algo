#include"header.h"
void * thread_1(void *p)
{
	char a[20];
	int fd;
	fd=open("f4",O_WRONLY);
	while(1)
	{
		scanf("%s",a);
		write(fd,a,strlen(a)+1);
	}
}



int main()
{
	pthread_t t1;
	mkfifo("f4",0644);

	pthread_create(&t1,NULL,thread_1,NULL);
	while(1);
}
