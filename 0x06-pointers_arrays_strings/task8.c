#include "main.h"

char *rot13(char *s)
{
    char *a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *r = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; a[j] != '\0'; j++)
        {
            if (s[i] == a[j])
            {
                s[i] = r[j];
                break;
            }
        }
    }

    return (s);
}