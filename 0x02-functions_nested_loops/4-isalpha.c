#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 *
 * Description: Checks if a given character is an alphabetic character,
 *              either uppercase or lowercase.
 *
 * @c: The character to be checked
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
