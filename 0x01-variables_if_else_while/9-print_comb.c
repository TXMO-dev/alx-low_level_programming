#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
if (i == 8 && j == 9)
{
continue;
}            
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
