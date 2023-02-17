#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
/* print alphabet in lowercase */
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
/* print alphabet in uppercase */
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
}
/* print new line */
putchar('\n');
return (0);
}

