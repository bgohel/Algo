#include<stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *p = arr;
    int (*ptr)[5] = &arr;
    

    printf("p = %p, ptr = %p\n",p,ptr);

    printf("*p = %u, *ptr = %p\n",*p,*ptr);
    printf("sizeof p = %u, sizeof ptr = %u\n",sizeof(p),sizeof(ptr));
    printf("sizeof *p = %u, sizeof *ptr = %u\n",sizeof(*p),sizeof(*ptr));
 
 
    return 0;


}