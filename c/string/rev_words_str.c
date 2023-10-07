#include <stdio.h>
#include <string.h>
void rev(int start, int end, char str[])
{
    char temp;
    while (start <= end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
void rev_words_str(char str[], int start, int end)
{
    int w_start, w_end;

    for (w_start = w_end = start; w_end < end; w_end++)
    {
        if (str[w_end] == ' ')
            continue;

        w_start = w_end;

        while (str[w_end] != ' ' && w_end <= end)
            w_end++;

        w_end--;
        rev(w_start, w_end, str);
        // puts(str);
    }
}

void rev_str(char str[])
{

    int i, j;
    char temp;

    for (i = 0, j = strlen(str) - 1; i <= j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
int main()
{
    char str[50];
    strcpy(str, "I have many Books");
    puts(str);
    rev_str(str);
    // rev(0,strlen(str)-1,str);
    rev_words_str(str, 0, strlen(str) - 1);
    puts(str);
    return 0;
}