#include <stdio.h>

int main(void)
{
    long int first = 1, second = 2, next, i = 0;

    printf("%ld, %ld, ", first, second);

    while (i < 48)
    {
        next = first + second;
        first = second;
        second = next;

        if (i == 49)
            printf("%ld", next);
        else
            printf("%ld, ", next);
        
        i++;
    }

    return (0);
}