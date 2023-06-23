#include <stdio.h>

int main(void)
{
    int i;
    char c;

    for (i = 0; i <=9; i++)
    {
        putchar(i + '0');
        if (i == 9)
        {
            for (c = 'a'; c <= 'f'; c++)
            {
                putchar(c);
            }
        }
    }
    putchar('\n');

    return(0);
}