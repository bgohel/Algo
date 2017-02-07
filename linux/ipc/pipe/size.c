#include"header.h"
main()

{
	int p[2],c=0;
	pipe(p);

	if(fork()==0)
	{
		int ch;
		while(read(p[0],&ch,1)!=-1)
		{
			printf("ch=%c\n",ch);
		}
		perror("read");
	}
	else
	{
		char ch='a';
		while(write(p[1],&ch,sizeof(ch))!=-1)
		{
			c++;
			printf("c=%d\n",c);
		}
	}




/*		 char ch='a';
                while(write(p[1],&ch,sizeof(ch))!=-1)
                {
                        c++;
//                        printf("c=%d\n",c);
                }
                        printf("c=%d\n",c);

*/
	printf("thanks...\n");
}
