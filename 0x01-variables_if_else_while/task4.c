#include <stdio.h>

int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        if (c == 'q' || c == 'e')
        {
            continue;
        }
        putchar(c);
    }
    putchar('\n');
}