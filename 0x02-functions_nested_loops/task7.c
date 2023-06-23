#include "main.h"

int print_last_digit(int n)
{
    int last = n % 10;

    if (last < 0)
    {
        _putchar((last * -1) + '0');
        return (last * -1);
    }
    else
    {
        _putchar(last + '0');
        return (last);
    }
}