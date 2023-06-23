#include <stdio.h>

int main(void)
{
        unsigned long long int first = 1, second = 2, next, i = 0;

        printf("%llu, %llu, ", first, second);

        while (i < 96)
        {
                next = first + second;
                first = second;
                second = next;

                if (i == 95)
                        printf("%llu", next);
                else
                        printf("%llu, ", next);

                i++;
        }
        printf("\n");

        return (0);
}