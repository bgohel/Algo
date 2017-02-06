
#include"header.h" 
main()
{
	int p[2];
	pipe(p);
	if(fork()==0)
	{//grep pts/0
//		perror("child");
	//	close(0);
	//	dup(p[0]);
		dup2(p[0],0);
	//	close(p[1]);
		execlp("grep","grep","pts/0",NULL);
	}
	else
	{//ps -el
//		close(1);
//		dup(p[1]);
		dup2(p[1],1);
//		close(p[0]);
		execlp("ps","ps","-el",NULL);
	}
}
