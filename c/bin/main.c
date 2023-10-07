#include <stdio.h>
#include <stdlib.h>

typedef struct ST
{
    /* data */
    int num;
    struct ST *next;
}ST;

void add_end(ST **ptr, int data)
{
    ST *temp, *temp1;
    temp = (ST*)malloc(sizeof(ST));
    (temp->num) = data;

    if(*ptr==0)
    {    
    temp->next = *ptr;
    *ptr = temp;
    }
    else
    {
        temp1 = *ptr;

        while(temp1->next!=NULL)
        temp1=temp1->next;

        temp->next =temp1->next;
        temp1->next = temp;
    }

}

void add_middle(ST **ptr, int data)
{
    ST *temp, *temp1;
    temp = (ST *)malloc(sizeof(ST));
    (temp->num) = data;

    if(*ptr==0 || ((*ptr)->num > temp->num ))
    {    
    temp->next = *ptr;
    *ptr = temp;
    }
    else
    {
        temp1 = *ptr;        
        while(temp1)
        {
            if(temp1->next==0)
            {
                temp->next =temp1->next;
                temp1->next = temp;
                break;
            }
            if(temp1->next->num > temp->num)
            {
                temp->next =temp1->next;
                temp1->next = temp;
                break;
            }

        temp1=temp1->next;
        }                
    }
}



void add_begin(ST **ptr, int data)
{
    ST *temp = NULL;
    temp = (ST *)malloc(sizeof(ST));
    (temp->num) = data;
    
    temp->next = *ptr;
    *ptr = temp;    
}



void print(ST *p)
{
    while (p)
    {
        printf("data - %d\n", (p->num));
        p = p ->next;
    }
}

int main(void)
{
    ST *head = NULL;
    int i, num;
    i=0;
    /*add_begin(&head, 10);50
    add_begin(&head, 20);
    add_begin(&head, 30);
    add_begin(&head, 40);*/

   /* add_end(&head,10);
    add_end(&head,20);
    add_end(&head,30);
    add_end(&head,40);*/
while(i!=5)
{
    printf("Enter num \n");
    scanf("%d",&num);
    add_middle(&head,num);
    i++;
}
    print(head);
}