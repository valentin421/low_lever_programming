#include "main.h"

int _isdigit(int c)
{
    char i;

    for (i = '0'; i <= '9'; i++)
    {
        if (i == c)
        {
            return (1);
        }
    }

    return (0);
}