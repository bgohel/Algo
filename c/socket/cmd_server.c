# include"header.h"
int main(int argc,char **argv)
{
	char a[20];
	struct sockaddr_in v,v1;
	int sfd,nsfd,len;
	int i;
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
	v.sin_addr.s_addr=inet_addr("0.0.0.0");
	len =sizeof(v);

	if(bind(sfd,(struct sockaddr *)&v,len)<0)
	{
		perror("bind");
		return;
	}
	perror("bind");
	///////////////////////////////////////////////////////////////////////////////////////////////

	listen(sfd,5);
	perror("listen");

	//////////////////////////////////////////////////////////////////////////////////////////////

	printf("Befor\n");
	nsfd=accept(sfd,(struct sockaddr *)&v1,&len);
	perror("After ...\n");

	/////////////////////////////////////////////////////////////////////////////////////////////
	while(1)
{
	read(nsfd,a,sizeof a);
	for(i=0;a[i];i++)
	if(a[i]>='a' && a[i]<='z')
	a[i]=a[i]-32;

	printf("%s\n",a);
}
}

