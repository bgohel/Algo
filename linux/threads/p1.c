#include"header.h"
void * thread_1(void *p)
{
//	while(1)
//	{sleep(1);
		printf("IN thread 1....thread id=%u\n",pthread_self());
		printf("%s\n",(char *)p);
//}
//	sleep(1);
}

void * thread_2(void *p)
{
//	while(1)
//{	sleep(1);
		printf("IN thread 2....thread id=%u\n",pthread_self());
		printf("%s\n",(char *)p);
//}
}




main()
{
	pthread_t t1,t2;

	pthread_create(&t2,NULL,thread_2,"Bhargav");
	pthread_create(&t1,NULL,thread_1,"Gohel");

pthread_exit(0);
while(1);








}
