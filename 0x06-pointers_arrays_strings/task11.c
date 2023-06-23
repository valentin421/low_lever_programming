#include "main.h"

void reverse_string(char *s);

int to_int(char *s, int index)
{
    int len = _strlen(s);

    if (index < len)
    {
        return (s[len - 1 - index] - '0');
    }

    return (0);
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int len1, len2, width, carry = 0, i, a, b, sum;

    len1 = _strlen(n1);
    len2 = _strlen(n2);
    width = len1 > len2 ? len1 : len2;

    for (i = 0; i < width || carry != 0; i++)
    {
        if (i > size_r - 1)
        {
            return (0);
        }

        a = to_int(n1, i);
        b = to_int(n2, i);
        sum = a + b + carry;

        carry = sum / 10;
        r[i] = (sum % 10) + '0';
    }
    r[i] = '\0';

    if (_strlen(r) >= size_r)
    {
        return (0);
    }

    reverse_string(r);

    return r;
}

void reverse_string(char *s)
{
    int i, len = _strlen(s);

    for (i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
}