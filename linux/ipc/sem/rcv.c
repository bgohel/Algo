#include"header.h"
int main(int argc,char **argv)
{
	int id,ret;

	if(argc!=3)
	{
		printf("put proper values\n");
		return;
	}
	id=semget(5,5,IPC_CREAT|0644);
	if(id<0)
	{
		perror("semget");
		return;
	}
	semctl(id,atoi(argv[1]),SETVAL,atoi(argv[2]));
	perror("semctl");
	
}
