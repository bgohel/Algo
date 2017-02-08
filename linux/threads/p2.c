#include"header.h"
void * thread_1(void *p)
{
	//	while(1)
	//	{
		printf("IN thread 1....thread id=%u\n",pthread_self());
		printf("%s\n",(char *)p);
		sleep(1);
		pthread_exit("bye");
	//	}
}
main()
{
	char *p;

	pthread_t t1,t2;

	pthread_create(&t1,NULL,thread_1,"Gohel");
	printf("In main Before\n");
	pthread_join(t1,&p);
	printf("In main After...%s\n",p);
//pthread_exit(0);
while(1);








}
