//4th sec sigint and again sigquit
#include<stdio.h>
#include<signal.h>

void isr(int n)
{
	static int c=0,d=0;
 if (n==SIGINT)
{
c++;
	if(c>2)
		signal(SIGINT,SIG_DFL);
}
	if(n==SIGQUIT)
	{
		d++;
		 if(d>0)
			signal(SIGQUIT,SIG_DFL);
		}
	printf("isr...\n");
}

main()
{
	signal(SIGINT,isr);
	signal(SIGQUIT,isr);
	while(1);
}
