#include "main.h"

void print_buffer(char *b, int size)
{
    int i, j, k;

    for (i = 0; i < size; i += 10)
    {
        printf("%.8x:", i);

        for (j = i; j < i + 10 && j < size; j++)
        {
            if (j % 2 == 0)
            {
                printf(" ");
            }
            printf("%.2x", b[j]);
        }

        for (; j < (i + 10) + 1; j++)
        {
            printf(" ");
        }

        for (k = i; k < i + 10 && k < size; k++)
        {
            if ((b[k] >= 0 && b[k] < 32) || b[k] == 127)
            {
                printf(".");
            }
            else
            {
                printf("%c", b[k]);
            }
        }
        printf("\n");
    }
}