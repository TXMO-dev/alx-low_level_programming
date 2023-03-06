#include <string.h>
/**
* _strspn - gets the length of a prefix substring
* @s: the string to search
* @accept: the set of characters to search for
*
* Return: the number of bytes in the initial segment of s which consist only
* of bytes from accept
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int accept_len = strlen(accept);
int found;
while (*s != '\0')
{
found = 0;
for (int i = 0; i < accept_len; i++)
{
if (*s == accept[i])
{
count++;
found = 1;
break;
}
}
if (found == 0)
{
return (count);
}
s++;
}
return (count);
}
