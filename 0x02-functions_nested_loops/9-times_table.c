#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: void
*/
void times_table(void)
{
int i, j, r;
for (i = 0; i < 10; i++)
{
_putchar('0');
for (j = 1; j < 10; j++)
{
r = i * j;
_putchar(',');
_putchar(' ');
if (r < 10)
{
_putchar(' ');
_putchar(r + '0');
}
else
{
_putchar(r / 10 + '0');
_putchar(r % 10 + '0');
}
}
_putchar('\n');
}
}
