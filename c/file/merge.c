#include<stdio.h>

main(int argc, char** argv)
{

	FILE *fs,*fd,*fp;

	char s[100],d[100];

	fs=fopen(argv[1],"r");
	fd=fopen(argv[2],"r");
	fp=fopen(argv[3],"w");

	while(fscanf(fs,"%s",s)!=EOF && fscanf(fd,"%s",d)!=EOF)
	{
		fputs(s,fp);
		fputc(' ',fp);
		fputs(d,fp);
		fputc(' ',fp);
	}

	if(fgetc(fs)!=EOF)
	{

		while(fscanf(fs,"%s",s)!=EOF)
		{
			fputs(s,fp);
			fputc(' ',fp);
		}

	}


	else if(fgetc(fd)!=EOF)
	{
		while(fscanf(fd,"%s",d)!=EOF)
		{
			fputs(d,fp);
			fputc(' ',fp);

		}

	}
}

