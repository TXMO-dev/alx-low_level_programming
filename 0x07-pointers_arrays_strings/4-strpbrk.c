#include <stdio.h>
#include <stdlib.h>
/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: A pointer to the string to search.
* @accept: A pointer to the set of bytes to search for.
* Return: A pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
char *p = s;
while (*p != '\0')
{
char *q = accept;
while (*q != '\0')
{
if (*p == *q)
{
return (p);
}
q++;
}
p++;
}
return (NULL);
}
