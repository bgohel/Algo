#include"header.h"
main()
{
	int fd;
	char s[20];
	mkfifo("f1",0660);
	perror("mkfifo");
	fd=open("f1",O_WRONLY);
	perror("OPEN");
	printf("Enter the String...\n");
	while(1)
	{
		scanf("%s",s);

		write(fd,s,strlen(s)+1);
	}
}
