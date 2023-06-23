#include "main.h"

void print_triangle(int size)
{
    int i, j, k;

    if (size <= 0)
    {
        _putchar('\n');
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < (size - 1) - i; j++)
        {
            _putchar(' ');
        }

        for (k = 0; k < i + 1; k++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}