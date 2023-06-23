#include "main.h"

int _islower(int c)
{
    char l;

    for (l = 'a'; l <= 'z'; l++)
    {
        if (l == c)
        {
            return (1);
        }
    }

    return (0);
}