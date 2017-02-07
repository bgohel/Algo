#include"header.h"
int main(int argc,char **argv)
{
	int id,ret,fd;
	
	struct sembuf v;

	char a[26];
	int i;
	
	char ch='a';


	id=semget(5,5,IPC_CREAT|0644);
	
	fd=open("data",O_RDWR|O_APPEND|O_CREAT,0644);
	
	v.sem_num=1;
	v.sem_op=0;
	v.sem_flg=0;


	printf("Before\n");
	semop(id,&v,1);
	printf("After\n");

	semctl(id,1,SETVAL,1);
/*
	for(ch='a';ch<='z';ch++)
	{
		write(fd,&ch,1);
		sleep(1);

	}
*/

	 for(i=1;i<=26;i++)
        {
		a[i]=ch++;
                write(fd,&a[i],1);
                sleep(1);

        }

	
	semctl(id,1,SETVAL,0);

	printf("Done\n");
}
