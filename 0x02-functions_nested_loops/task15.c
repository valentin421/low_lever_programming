#include <stdio.h>

int main(void)
{
    long int first = 1, second = 2, next = 0, i = 0;
    long int sum = second;

    while (next <= 4000000)
    {
        next = first + second;
        first = second;
        second = next;

        if (next % 2 == 0)
            sum += next;

        i++;
    }

    printf("%ld\n", sum);

    return (0);
}