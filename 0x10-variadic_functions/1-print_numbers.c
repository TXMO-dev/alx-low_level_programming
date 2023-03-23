#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - prints numbers followed by a new line
* @separator: the string to be printed between numbers
* @n: the number of integers passed to the function
*
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int num;
va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
if (num < 0)
{
putchar('-');
num = -num;
}
if (num == 0)
{
putchar('0');
}
else
{
print_positive_number(num);
}
if (separator != NULL && i != n - 1)
{
while (*separator)
{
putchar(*separator++);
}
}
}
va_end(args);
putchar('\n');
}
/**
* print_positive_number - helper function to print positive numbers recursively
* @num: the positive number to be printed
*
* Return: void
*/
void print_positive_number(int num)
{
if (num == 0)
{
return;
}
print_positive_number(num / 10);
putchar(num % 10 + '0');
}
