#include"header.h"
void isr(int n)
{
	printf("In isr...\n");
//	wait(0);

}
main()
{
	if(fork()==0)
	{
		printf("In child....\n");
		sleep(10);
		printf("after sleep...\n");
	}
	else
	{
		printf("In parent...\n");
		signal(SIGCHLD,isr);
		while(1);
	}






}
