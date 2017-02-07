#include"header.h"
int main(int argc,char **argv)
{
	int id,ret;
	
	struct sembuf v;

	id=semget(5,5,IPC_CREAT|0644);
	if(id<0)
	{
		perror("semget");
		return;
	}
	
	v.sem_num=2;
	v.sem_op=2;
	v.sem_flg=0;


	printf("Before\n");
	semop(id,&v,1);
	printf("After\n");
	sleep(1);
	printf("Done\n");
}
