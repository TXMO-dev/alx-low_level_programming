#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* print_all - prints anything.
* @format: a list of types of arguments passed to the function.
* c: char
* i: integer
* f: float
* s: char * (if the string is NULL, print (nil) instead.
* any other char should be ignored.
* Return: void.
*/
void print_all(const char * const format, ...)
{
va_list args;
int i = 0;
char *s;
va_start(args, format);
while (format && format[i])
{
if (format[i] == 'c')
{
printf("%c", va_arg(args, int));
}
else if (format[i] == 'i')
{
printf("%d", va_arg(args, int));
}
else if (format[i] == 'f')
{
printf("%f", va_arg(args, double));
}
else if (format[i] == 's')
{
s = va_arg(args, char *);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
}
else
{
i++;
continue;
}
if (format[i + 1] != '\0')
{
printf(", ");
}
i++;
}
printf("\n");
va_end(args);
}
