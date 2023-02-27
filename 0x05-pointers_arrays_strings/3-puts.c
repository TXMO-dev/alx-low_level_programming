#include "holberton.h"
/**
* _puts - Prints a string to the standard output followed by a new line.
*
* @str: Pointer to the string.
*/
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
