#include "main.h"

void times_table(void)
{
    int i, j;

    for (i = 0; i <=9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            int mul = i * j;
            int next = (j + 1) * i;

            if (mul <= 9)
            {
                _putchar(mul + '0');
            }
            else
            {
                _putchar((mul / 10) + '0');
                _putchar((mul % 10) + '0');
            }

            if (j != 9)
            {
                _putchar(',');
            }

            if (next < 10)
            {
                _putchar(' ');
                _putchar(' ');
            }
            else
            {
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}