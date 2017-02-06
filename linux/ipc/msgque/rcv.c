#include"header.h"
struct msgbuf
{
	long mtype;
	char data[20];
};
main(int argc,char **argv)
{
	int id;
	struct msgbuf v;
	if(argc!=2)
	{
		printf("Usage: ./snd type data\n");
		return;
	}
	id=msgget(5,IPC_CREAT|0644);
	if(id<0)
	{
		perror("msgget");
		return;
	}



	msgrcv(id,&v,sizeof(v),atoi(argv[1]),IPC_NOWAIT);
	printf("data=%s\n",v.data);



}
