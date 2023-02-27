#include <stdio.h>
/**
* print_rev - Prints a string in reverse, followed by a new line.
* @s: The string to be printed in reverse.
*/
void print_rev(char *s)
{
int len = 0;
int i;
while (s[len] != '\0')
{
len++;
}
for (int i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
