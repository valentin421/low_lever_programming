#include "main.h"

void reverse_array(int *a, int n)
{
    int i;

    for (i = 0; i < n / 2; i++)
    {
        int tem = a[i];
        a[i] = a[n - (i + 1)];
        a[n - (i + 1)] = tem;
    }
}