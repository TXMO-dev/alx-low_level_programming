#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
    char *ptr = s;
    while (n--)
    {
        *s = b;
        s++;
    }
    return ptr;
}
