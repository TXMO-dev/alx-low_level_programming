#include "main.h"
/**
* _strspn - gets the length of a prefix substring
* @s: the string to search
* @accept: the string of accepted characters
*
* Return: the number of bytes in the initial segment of s which consist
* only of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *p = accept;
while (*s)
{
while (*p && *p != *s)
{
p++;
}
if (!*p)
{
return count;
}
count++;
s++;
p = accept;
}
return (count);
}
