#include"header.h"
int main(int argc,char** argv)
{
	char a[20];
	struct sockaddr_in v;
	int sfd,len;

	///////////////////////////////////////////////////////////////////////////////////
	sfd=socket(AF_INET,SOCK_STREAM,0);
	if(sfd<0)
	{
		perror("socket");
		return;
	}
	perror("socket");

	////////////////////////////////////////////////////////////////////////////////////

	v.sin_family=AF_INET;
	v.sin_port =htons(atoi(argv[1]));
	v.sin_addr.s_addr=inet_addr(argv[2]);
	len =sizeof(v);

	if(connect(sfd,(struct sockaddr *)&v,len)<0)
	{
		perror("connect");
		return;
	}
		perror("connect");
	///////////////////////////////////////////////////////////////////////////////////////////////

	printf("Enter the data\n");
	scanf("%s",a);
	write(sfd,a,strlen(a)+1);

}

