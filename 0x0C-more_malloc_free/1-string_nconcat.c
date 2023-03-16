#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - concatenates two strings up to n bytes.
* @s1: pointer to the first string.
* @s2: pointer to the second string.
* @n: maximum number of bytes to concatenate from s2.
*
* Return: pointer to a new string
* of s2 and a null terminator, or NULL if the function fails.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1, len2, size;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
if (n >= len2)
{
n = len2;
}
size = len1 + n + 1;
concat = malloc(size);
if (concat == NULL)
{
return (NULL);
}
memcpy(concat, s1, len1);
memcpy(concat + len1, s2, n);
concat[len1 + n] = '\0';
return (concat);
}
