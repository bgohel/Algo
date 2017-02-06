#include<stdio.h>
#include<signal.h>

void isr(int n)
{
printf("in isr...%d\n",n);
signal(SIGINT,SIG_DFL);
signal(SIGQUIT,SIG_DFL);

}
main()
{

alarm(5);
printf("be e..\n");
signal(SIGINT,SIG_IGN);
signal(SIGQUIT,SIG_IGN);
signal(14,isr);
while(1);
}
