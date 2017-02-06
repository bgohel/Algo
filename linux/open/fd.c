#include"header.h"
main()
{

int fd,fd1;

fd=open("abc",O_RDONLY);
fd1=open("def",O_WRONLY);

printf("fd=%d fd1= %d \n",fd,fd1);


}
