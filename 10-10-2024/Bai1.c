#include<stdio.h>
int main()
{
    char c;
    int is_new_word = 1;
    while ((c = getchar()) != '\n')
    {
        if (c != ' ' && is_new_word)
        {
            putchar(c);
            is_new_word = 0;
        }
        else if (c == ' ')
        {
            is_new_word = 1;
        } 
    }
    putchar('\n');


    return 0;
}
