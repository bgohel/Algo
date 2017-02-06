#include"header.h"
void isr(int n)
{
	printf("in isr....\n");
	sleep(2);
	printf("after sleep..\n");
}
main()
{
	signal(2,isr);
	while(1);
}

