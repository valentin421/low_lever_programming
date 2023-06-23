#include "main.h"

int _putchar(char c)
{
    return (write(STDIN_FILENO, &c, 1));
}

int _strlen(char *s)
{
    int c = 0, len = 0;

    while (s[c++] != '\0')
    {
        len++;
    }
    
    return (len);
}