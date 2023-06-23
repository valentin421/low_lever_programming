#include "main.h"

int _strcmp(char *s1, char *s2)
{
    int rem = 0, i = 0;

    while (s1[i] != '\0' || s2[i] != '\0')
    {
        rem = s1[i] - s2[i];
        if (rem != 0)
        {
            return (rem);
        }
        i++;
    }

    return (rem);
}