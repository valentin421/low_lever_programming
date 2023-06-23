#include "main.h"

int _isupper(int c)
{
    char i;

    for (i = 'A'; i <= 'Z'; i++)
    {
        if (c == i)
        {
            return (1);
        }
    }

    return (0);
}