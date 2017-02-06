#include"header.h"
struct st{

int i;
char ch;
char a[20];
float f;
}s,s1;
main()
{
	s.i=10;
	s.ch='B';
	strcpy(s.a,"BHARGAVGOHEL");
	s.f=3.14;
	int fd,l;
	fd=open("abc",O_WRONLY|O_TRUNC|O_CREAT,0644);
	//fd=open("abc",O_WRONLY);
	if(fd<0)
	{

		perror("OPEN");
		return;
	}
	printf("fd=%d\n",fd);
	l=write(fd,&s,sizeof(s));
	printf("l=%d\n",l);
	printf("don....\n");
	fd=open("abc",O_RDONLY);
	read(fd,&s1,sizeof(s1));
	printf("%d %c %s %f",s1.i,s1.ch,s1.a,s1.f);
}
