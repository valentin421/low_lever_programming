#include "main.h"

char *cap_string(char *s)
{
    int i, j;
    char *sep = " \t\n,;.!?\"(){}";

    for (i = 0; s[i] != '\0'; i++)
    {
        if (i == 0)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }
        else
        {
            for (j = 0; sep[j] != '\0'; j++)
            {
                if (s[i - 1] == sep[j])
                {
                    if (s[i] >= 'a' && s[i] <= 'z')
                    {
                        s[i] -= 32;
                    }
                }
            }
        }
    }

    return (s);
}