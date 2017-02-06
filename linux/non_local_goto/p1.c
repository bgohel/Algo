#include<stdio.h>
#include<setjmp.h>
jmp_buf v;
void abc(void);
main()
{
setjmp(v);
printf("hello\n");
abc();
printf("in  main...\n");
}
void abc(void)
{

printf("in  abc...\n");

//main();
sleep(1);

longjmp(v,1);

}
