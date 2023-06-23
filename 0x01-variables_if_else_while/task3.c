#include <stdio.h>

int main(void)
{
    char c, c2;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);

        if (c == 'z')
        {
            for (c2 = 'A'; c2 <= 'Z'; c2++)
            {
                putchar(c2);
                if (c2 == 'Z')
                {
                    break;
                }
            }
            
        }
        
    }
    putchar('\n');

    return(0);
}