#include "main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *ptr = dest;
    while (n--)
    {
        *dest = *src;
        dest++;
        src++;
    }
    return ptr;
}
