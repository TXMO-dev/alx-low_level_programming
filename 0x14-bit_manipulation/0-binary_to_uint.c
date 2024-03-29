#include <stdio.h>
#include "main.h"
/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to string containing binary number
*
* Return: converted number, or 0 if b is NULL or contains non-0/1 chars
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;
int i;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
num = num * 2 + (b[i] - '0');
}
return (num);
}
