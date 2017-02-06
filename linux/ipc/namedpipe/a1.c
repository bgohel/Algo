#include"header.h"
main()
{
	int fd,fd1;
	char s[20],a[20];
	mkfifo("f1",0660);
	mkfifo("f2",0660);
	perror("mkfifo");
	fd=open("f1",O_WRONLY);
	fd1=open("f2",O_RDONLY);
	perror("OPEN");
while(1)
{
	printf("Enter the String...\n");
		scanf("%s",s);
		write(fd,s,strlen(s)+1);
		read(fd1,a,sizeof(a));
		printf("%s\n",a);
}
}
