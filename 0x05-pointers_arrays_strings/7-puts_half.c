#include "holberton.h"
/**
* puts_half - Prints the second half of a string, followed by a new line.
*
* @str: The string to print.
*/
void puts_half(char *str)
{
int len = 0;
while (str[len] != '\0')
{
len++;
}
int n = (len - 1) / 2;
if (len % 2 == 0)
{
for (int i = n; i < len; i++)
{
_putchar(str[i]);
}
}
else
{
for (int i = n + 1; i < len; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
