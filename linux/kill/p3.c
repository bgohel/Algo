#include<stdio.h>
#include<signal.h>
void isr(int n)
{
	printf("In isr..%d\n",n);
	alarm(1);
	signal(14,SIG_DFL);
}
main()
{
int ret;
	signal(14,isr);
	printf("Hello\n");
	alarm(5);
	sleep(2);
	ret=alarm(1);

	printf("ret=%d...\n",ret);
	printf("hai...\n");
	while(1);
}
