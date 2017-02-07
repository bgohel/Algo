#include"header.h"
int main(int argc,char **argv)
{
	int id,ret,fd;
	
	struct sembuf v;

	char ch='a';

	id=semget(5,5,IPC_CREAT|0644);
	
	fd=open("data",O_RDWR|O_APPEND|O_CREAT,0644);
	
	v.sem_num=1;
	v.sem_op=0;
	v.sem_flg=0;



	for(ch='a';ch<='z';ch++)
	{
		semop(id,&v,1);
		semctl(id,1,SETVAL,1);
		semctl(id,2,SETVAL,1);
		write(fd,&ch,1);
		sleep(1);
		semctl(id,2,SETVAL,0);
		
	}

	printf("Done\n");
}
