#include <stdio.h>

int main(void)
{
    int i, j, k, l;

    for (i = 0; i < 100; i++)
    {
        for (j = i + 1; j < 100; j++)
        {
            putchar((i / 10) + '0');
            putchar((i % 10) + '0');
            putchar(' ');
            putchar((j / 10) + '0');
            putchar((j % 10) + '0');

            if (i != 98)
            {
                putchar(',');
                putchar(' ');
            }

        }
    }

    putchar('\n');

    return (0);
}