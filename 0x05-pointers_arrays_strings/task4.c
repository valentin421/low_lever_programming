#include "main.h"

void print_rev(char *s)
{
    int len = 0, c = 0, i;

    while (s[c++] != '\0')
    {
        len++;
    }

    for (i = 0; s[i] != '\0'; i++)
    {
        _putchar(s[len - (i + 1)]);
    }
    _putchar('\n');
}