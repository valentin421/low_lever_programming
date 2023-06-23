#include "main.h"

void print_diagsums(int *a, int size)
{
    int i, j = 0, sum1 = 0;
    int m, n = size - 1, sum2 = 0;

    for (i = 0; i < (size * size); i += size, j++)
    {
        sum1 += a[i + j];
    }

    for (m = (size * size) - 1; m >= 0; m -= size, n--)
    {
        sum2 += a[m - n];
    }

    printf("%d, %d\n", sum1, sum2);
}