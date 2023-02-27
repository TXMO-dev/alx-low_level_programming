#include <stdio.h>
#include <string.h>
/**
* puts_half - Prints the second half of a string, followed by a new line.
*
* @str: The string to print.
*/
void puts_half(char *str)
{
int len = 0, n, i;
while (str[len] != '\0')
{
len++;
}
n = (len - 1) / 2;
for (i = n + 1; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
