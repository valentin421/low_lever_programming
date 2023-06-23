#include "main.h"

void rev_string(char *s)
{
    int i, len = 0, c = 0;

    while (s[c++] != '\0')
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        char tmp = s[i];
        s[i] = s[len - (i + 1)];
        s[len - (i + 1)] = tmp;
    }
}