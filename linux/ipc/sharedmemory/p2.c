#include"header.h"
main()
{
	char *p;
	int id;
	id=shmget(5,50,IPC_CREAT|0644);
	if(id<0)
	{
		perror("shmget");
		return;
	}

	printf("id=%d\n",id);
	p=shmat(id,0,0);

	//printf("Enter the data...\n");
	//scanf("%s",p);

	printf("Data=%s\n",p);

}
