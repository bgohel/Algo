#include"header.h"
void isr(int n)
{
printf("isr...\n");
}
main()
{
	int num;
	void (*p)(int);
//signal(2,isr);
	printf("Enter the num...\n");
	scanf("%d",&num);

	p=signal(num,SIG_IGN);
	perror("signal");
	signal(num,p);

	if(p==SIG_DFL)
		printf("Defaul...\n");
	else if(p==SIG_IGN)
		printf("IGnore..\n");
	else if(p==-1)
		printf("ISR..\n");



}
