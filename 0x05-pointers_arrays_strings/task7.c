#include "main.h"

void puts_half(char *str)
{
    int i, len = 0, c = 0;

    while (str[c++] != '\0')
    {
        len++;
    }

    i = len % 2 != 0 ? (len - 1) / 2 : ((len - 1) / 2) + 1;

    for (; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }
    _putchar('\n');
}