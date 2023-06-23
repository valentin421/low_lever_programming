#include "main.h"

char *_strstr(char *haystck, char *needle)
{
    int i, j;
    char *sub = NULL;

    if (needle == NULL)
    {
        return (haystck);
    }

    for (i = 0; haystck[i]; i++)
    {
        if (haystck[i] == needle[0])
        {
            sub = &haystck[i];

            for (j = 1; needle[j]; j++)
            {
                if (haystck[i + 1] != needle[j])
                {
                    sub = NULL;
                    break;
                }
                i++;
            }

            if (needle[j] == '\0')
            {
                return (sub);
            }
        }
    }

    return (sub);
}