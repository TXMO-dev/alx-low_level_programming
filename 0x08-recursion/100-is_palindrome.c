#include <string.h>
#include <stdio.h>
/**
* is_palindrome - Check if a string is a palindrome
*
* @s: Pointer to the string to check
*
* Return: 1 if the string is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = strlen(s);
if (len <= 1)
{
return (1);
}
if (*s == *(s + len - 1))
{
*(s + len - 1) = '\0';
return (is_palindrome(s + 1) * 1);
}
return (0);
}
