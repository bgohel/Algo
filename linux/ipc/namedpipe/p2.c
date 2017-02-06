#include"header.h"
main()
{
	int fd;
	char s[20];
	mkfifo("f1",0660);
	perror("mkfifo");
	fd=open("f1",O_RDONLY);
	perror("OPEN");

	while(1)
	{
		read(fd,s,sizeof(s));
		printf("%s\n",s);
	}
}
