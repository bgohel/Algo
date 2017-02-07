#include"header.h"
main()

{
	int p[2];
	pipe(p);

	if(fork()==0)
	{
        close(0);
        dup(p[0]);

        close(p[1]);
        execlp("grep","grep","pts\0",NULL);

	}
	else
	{
	close(1);
	dup(p[1]);
		
	close(p[0]);
	execlp("ps","ps","-ef",NULL);
	}
}
