#include "main.h"

void puts2(char *str)
{
    int i, len = 0, c = 0;

    while (str[c++] != '\0')
    {
        len++;
    }

    for (i = 0; i < len; i += 2)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}