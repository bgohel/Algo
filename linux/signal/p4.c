#include<stdio.h>
#include<signal.h>
void isr(int n)
{
printf("in isr...%d\n",n);

kill(-1,9);
}


main()
{

printf("in mmain...\n");
alarm(10);
signal(SIGALRM,isr);
while(1);
}
