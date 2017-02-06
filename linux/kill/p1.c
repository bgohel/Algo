#include<stdio.h>
#include<signal.h>
#include<sys/types.h>
main(int argc,char** argv )
{

printf("pid=%d\n",getpid());
///	if(argc!=3)
//	{
//		printf("usage...\n");
//		return;
//	}
//	kill(getpid(),atoi(argv[1]));
raise(8);
	perror("kill");

}
