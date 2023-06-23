#include "main.h"

char *leet(char *s)
{
    char *c = "aeotlAEOTL";
    char *n = "4307143071";
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; c[j] != '\0'; j++)
        {
            if (s[i] == c[j])
            {
                s[i] = n[j];
            }
        }
    }

    return (s);
}