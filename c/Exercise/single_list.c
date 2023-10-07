#include <stdio.h>
#include <stdlib.h>

typedef struct SL
{
    int no;
    struct SL *next; /* data */
}ST;

void add_beg(ST **ptr)
{
    ST *temp;

    temp = malloc(sizeof(ST));
    printf("Enter the number value\n");
    scanf("%d", &temp->no);

    temp->next = *ptr;
    *ptr = temp;
}

void rev(ST **ptr)
{
    ST *cur = *ptr;
    ST *prev = NULL;
    ST *next = NULL;

    while (cur)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    *ptr = prev;
}

void add_end(ST **ptr)
{
    ST *temp, *temp1;

    temp = malloc(sizeof(ST));
    printf("Enter the number value\n");
    scanf("%d", &temp->no);

    if (*ptr == 0)
    {
        temp->next = *ptr;
        *ptr = temp;
    }
    else
    {
        temp1 = *ptr;
        while (temp1->next)
            temp1 = temp1->next;

        temp->next = temp1->next;
        temp1->next = temp;
    }
}

void middle(ST **ptr)
{
    ST *temp, *temp1;

    temp = malloc(sizeof(ST));
    printf("Enter the number value\n");
    scanf("%d", &temp->no);

    if (*ptr == 0 || temp->no < (*ptr)->no)
    {
        temp->next = *ptr;
        *ptr = temp;
    }
    else
    {
        temp1 = *ptr;
        while (temp1)
        {
            if (temp1->next == NULL)
            {
                temp->next = temp1->next;
                temp1->next = temp;
                break;
            }
            if (temp1->next->no > temp->no)
            {
                temp->next = temp1->next;
                temp1->next = temp;
                break;
            }
            temp1 = temp1->next;
        }
    }
}

void delete(ST **ptr, int no)
{
    ST *temp, *temp1;
    temp = *ptr;

    while (temp)
    {
        if (temp->no == no)
        {
            if (temp == *ptr)
            {
                *ptr = (*ptr)->next;
                free(temp);
                break;
            }
            else
            {
                temp1->next = temp->next;
                free(temp);
                break;
            }
        }
        temp1 = temp;
        temp = temp->next;
    }
}

void del_all(ST** ptr)
{
    ST* temp;
    
    while(*ptr)
    {
        temp = *ptr;
        *ptr = (*ptr)->next;
        free(temp);
    }    
}

void print(ST *p)
{
    while (p)
    {
        printf("Numbers are as follows %d\n", p->no);
        p = p->next;
    }
}

int main(void)
{

    ST *head = 0;
    //add_beg(&head);
    //add_end(&head);
    //middle(&head);
    for(int i = 0 ; i<5;i++)
    {
        middle(&head);
    }
    
    //delete(&head,10);
    //rev(&head);
    del_all(&head);
    printf("After Del  the link list\n");
    print(head);
}