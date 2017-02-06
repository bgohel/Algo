#include<stdio.h>
#include<signal.h>
int l;
void isr(int n)
{
	printf("IN ISR %d\n",l);
	l--;
	if(l==0)
		raise(9);
	else
		alarm(l);
}
main(int argc, char** argv)
{

	l=atoi(argv[1]);
	signal(SIGALRM,isr);

	alarm(l);
	while(1);
}
