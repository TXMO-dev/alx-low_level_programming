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
if (*s == '\0' || *(s + 1) == '\0')
{
return (1);
}
if (*s == *(s + strlen(s) - 1))
{
return (is_palindrome(s + 1) * 1);
}
return (0);
}
