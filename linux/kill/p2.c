#include<stdio.h>
#include<signal.h>
void isr(int n)
{
printf("in isr..%d\n",n);
//signal(2,SIG_DFL);
}
main()
{
printf("hello.pid=%d....\n",getpid());
signal(2,isr);
printf("hai\n");
pause();
printf("BYE...\n");
while(1);
}
