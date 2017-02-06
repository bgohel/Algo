#include"header.h"
main()
{
	int fd,fd1;
	char s[20],a[20];
//	mkfifo("f1",0660);
//	mkfifo("f2",0660);
//	perror("mkfifo");
	fd=open("f1",O_RDONLY);
	fd1=open("f2",O_WRONLY);
	perror("OPEN");

		while(1){
		read(fd,s,sizeof(s));
		printf("%s\n",s);
		printf("Enter the data...\n");
		scanf("%s",a);
		write(fd1,a,strlen(a)+1);
			}
}
