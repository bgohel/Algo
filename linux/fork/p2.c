#include<stdio.h>
main()
{
	int ret;

	ret=fork();
	if(ret==0)
	{
		printf("In child...\n");
	}
	else
	{
		printf("In parent...\n");
	}
	printf("hai...\n");
	while(1);
}
