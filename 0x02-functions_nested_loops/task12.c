#include "main.h"

void format(int mul, int next, int j, int n);

void print_times_table(int n)
{
    int i, j;

    if (n > 15 || n < 0)
        return;
    
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            int mul = i * j;
            int next = i * (j + 1);
            
            format(mul, next, j, n);
        }
        _putchar('\n');
    }
}

void format(int mul, int next, int j, int n)
{
    if (mul < 10)
    {
        _putchar(mul + '0');
    }
    else if (mul >= 10 && mul <= 99)
    {
        _putchar((mul / 10) + '0');
        _putchar((mul % 10) + '0');
    }
    else
    {
        _putchar(((mul / 10) / 10) + '0');
        _putchar(((mul / 10) % 10) + '0');
        _putchar((mul % 10) + '0');
    }

    if (j != n)
    {
        _putchar(',');
        if (next <= 9)
        {
            _putchar(' ');
            _putchar(' ');
            _putchar(' ');
        }
        else if (next >= 10 && next <= 99)
        {
            _putchar(' ');
            _putchar(' ');
        }
        else
        {
            _putchar(' ');
        }
    }
}