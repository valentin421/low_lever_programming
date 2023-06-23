#include <unistd.h>

/* the putchar custom implementaion */
int _putchar(char c)
{
    return write(1, &c, 1);
}