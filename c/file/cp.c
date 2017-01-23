#include<stdio.h>

main(int argc,char** argv)
{
	FILE *fs,*fd;
	char ch;
	int i;
	if(argc<3)
	{
		printf("cmd is failed\n");
		return;
	}

	fs=fopen(argv[1],"r");

	if(fs==0)
		return;

	for(i=2;i<argc;i++)
	{
	fd=fopen(argv[i],"w");

	while((ch=fgetc(fs))!=EOF)
		fputc(ch,fd);

	rewind(fs);
	fclose(fd);
	}
}
