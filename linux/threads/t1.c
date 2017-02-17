#include<stdio.h>
#include<pthread.h>
void * print_hello(void *p)
{
	printf("thread is : %d\n",(int *)p);
	pthread_exit(0);

}

int main()
{
	pthread_t t1;
	int i;
	for(i=0;i<5;i++)
	{

		pthread_create(&t1,NULL,print_hello,(int* )i);
	}
//while(1);
pthread_exit(0);
}
