#include "main.h"

void print_number(int n)
{
    if (n / 10 != 0)
    {
        print_number(n / 10);
    }

    if (n >= 0)
    {
        _putchar((n % 10) + '0');
    }
    else
    {
        if (n / 10 == 0)
        {
            _putchar('-');
            _putchar(((n % 10) * -1) + '0');
        }
        else
        {
            _putchar(((n % 10) * -1) + '0');
        }
    }
}