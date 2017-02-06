#include<stdio.h>
#include<signal.h>
main()
{
signal(SIGHUP,SIG_IGN);
printf("pod=%d\n",getpid());
while(1);


}
