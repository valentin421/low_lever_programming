#include "main.h"

int main(void)
{
    char *c = "_putchar";
    int i = 0, j = 0;

    while (c[i++])
    {
        _putchar(c[j]);
        j++;
    }
    _putchar('\n');

    return (0);
}