#include"header.h"
int main()
{

	int p[2];
	pipe(p);

	if(fork()==0)
	{
		char a[20];
		read(p[0],a,sizeof(a));
		printf("%s\n",a);
	}
	else
	{
		char b[20];
		scanf("%s",b);
		write(p[1],b,strlen(b)+1);
	}
}
